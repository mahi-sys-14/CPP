#include<iostream>
using namespace std;

void display(int a)
{
	cout <<"Value of int a " << a << endl;
}

void display(float b)
{
	cout <<"Value of float a " << b << endl;
}

void display(int a, float b)
{
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
