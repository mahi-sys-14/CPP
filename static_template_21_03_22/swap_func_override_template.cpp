#include<iostream>

using namespace std;

template <typename T1>

void Swap(T1 &n1, T1 &n2)
{
	T1 n3;

	n3 = n1;
	n1 = n2;
	n2 = n3;

	cout << "Inside Template" << endl;
}

// over rides the generic version of swap() for int
void Swap(int &a, int &b)
{
	int temp;

	temp =a ;
	a = b;
	b = temp;

	cout << "Inside int swap" << endl;
}

int main()
{
	int a=10, b=30;
	float f1=2.9, f2=5.6;
	char x='x' , y='y';

	cout << "before swapping f1: " << f1 << " f2: " << f2 << endl;
	Swap(f1, f2);
	cout << "after swapping f1: " << f1 << " f2: " << f2 << endl<< endl;

	cout << "before swapping a: " << a << " b: " << b << endl;
	Swap(a, b);
	cout << "after swapping a: " << a << " b: " << b << endl << endl;

	cout << "before swapping x: " << x << " y: " << y << endl;
	Swap(x, y);
	cout << "after swapping x: " << x << " y: " << y << endl << endl;



	return 0;
}

