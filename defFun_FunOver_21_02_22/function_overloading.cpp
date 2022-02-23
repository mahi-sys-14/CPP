// This is an example of function overloading
// In this we can have different function of same name but the no. arguments passed, their order of passing, data type of arguments either of them must be different
// In function overloading return type doesn't matter
 
#include<iostream>
using namespace std;

void display(int a)
{
	cout << "In display(int)" << endl;
	cout <<"Value of int a " << a << endl;
}

void display(float b)
{
	cout << "In display(float)" << endl; 
	cout <<"Value of float a " << b << endl;
}

void display(int a, float b)
{
	cout << "In display(int, float)" << endl;
	cout <<"Value of int a " << a << endl;
	cout <<"Value of float b " << b << endl;
}

int main()
{
	int a=20; 
	float b=5.3;

	display(a);
	display(b);
	display(a , b);

	return 0;
}
