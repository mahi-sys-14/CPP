#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout << "Class A" << endl;
		}
};

class B
{
	public:
		void displayB()
		{
			cout << "Class B" << endl;
		}
};
class C : public A
{
	public:
		void displayC()
		{
			cout << "Class C" << endl;
		}
};

class D : public B
{
	public:
		void displayD()
		{
			cout << "Class D" << endl;
		}
};
class E : public C, public D
{
	public:
		void displayE()
		{
			cout << "Class E" << endl;
		}
};

class F : public E
{
	public:
		void displayF()
		{
			cout << "Class F" << endl;
		}
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;

	a.displayA();
/*
	b.displayA();
	b.displayC();
	b.displayD();
*/
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();

	e.displayA();
	e.displayB();
	e.displayC();

	return 0;
}
