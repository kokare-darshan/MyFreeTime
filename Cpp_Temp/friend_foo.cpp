#include <iostream>
using namespace std;
int year;
class foo;
class dates
{
private:
  friend ostream& operator<<(ostream&, dates&);
  int year, month, day;
  static int year1;
public:
  friend class foo;
  dates() { year=month=day=0;};
  ~dates(){};
  int sameDay(int d) const {return d==day;};
  void set(int y) const {year1 = y;};
  void set(int y) {year = y;};
};

class foo
{
 public:
  void set(dates& D, int year) {D.year = year;};
};

ostream& operator<<(ostream& os, dates& D)
{
  os << D.year << "," << D.month << "," << D.day << "," << D::year1;
  return os;
}

int main()
{
  dates Dobj;
  foo Fobj;
  Fobj.set(Dobj, 1998);
  cout <<"Dobj: " << Dobj << '\n';
}
