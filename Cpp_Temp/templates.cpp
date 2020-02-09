#include<iostream>
#include<typeinfo>

using namespace std;

// class template type
template <typename T>
class template_try
{
public:
	T var;
	void printIt();
	template_try(T temp): var(temp){cout << "template_try constructor\n";}
	~template_try(){cout << "template_try distructoe\n";}
};

template <typename T>
void template_try<T>::printIt(){cout << "printing var:" << var <<endl;}

// special class template (template overload)
template <>
class template_try <char>
{
public:
	char var;
	void printIt(){ cout << "printing char var:" << var << endl;}
	template_try(char temp): var(temp){cout << "template_try char constructor\n";}
	~template_try(){cout << "template_try char distructoe\n";}
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
	template_try<char> test2('a');
	test1.printIt();
	test2.printIt();
	foo<int>(5);
	foo('a');
	cout << "Hello World\n" ;
}

