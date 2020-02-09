#include<iostream>
#include<typeinfo>

using namespace std;

// class template type
template <typename T>
class template_try
{
public:
	T var;
	void printIt(){ cout << "printing var:" << var << endl;}
	template_try(T temp): var(temp){cout << "template_try constructor\n";}
	~template_try(){cout << "template_try distructoe\n";}
};

// function template type
template <typename T>
T foo(T type_var)
{

	cout << "printing foo type_var: " << type_var <<"\t of type: "<< typeid(type_var).name() << endl;
	return type_var;
}

int main()
{
	template_try<int> test1(10);
	test1.printIt();
	foo<int>(5);
	cout << "Hello World\n" ;
}

