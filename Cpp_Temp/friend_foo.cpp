#include <iostream.h>
int year;
class foo;
class dates
{
private:
  friend ostream& operator<<(ostream&, dates&);
  int year, month, day;
public:
  friend class foo;
  dates() { year=month=day=0;};
  ~dates(){};
  int sameDay(int d) const {return d==day;};
  void set(int y) const {::year = y;};
  void set(int y) {yeat = y;};
};

class foo
{
 public:
  void set(dates& D, int year) {D.year = year;};
};

ostream& operator<<(ostream& os, dates& D)
{
  os << D.year << "," << D.month << "," << D.day;
  return os;
}

int main()
{
  dates Dobj;
  foo Fobj;
  Fobj.set(Dobj, 1998);
  clog <<"Dobj: " << Dobj << '\n';
}
