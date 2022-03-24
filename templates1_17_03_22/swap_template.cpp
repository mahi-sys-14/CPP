#include<iostream>

using namespace std;

template <typename T1, typename T2>

void Swap(T1 &n1, T2 &n2)
{
	T2 n3;

	n3 = (T2)n1;
	n1 = (T1)n2;
	n2 = n3;

//	n1 = n1+n2;
//	n2 = n1-n2;
//	n1 = n1-n2;

//	return 0;
}

int main()
{
	int a=10, b=30;
	float f1=2.9, f2=5.6;

	cout << "before swapping a: " << a << " f1: " << f1 << endl;
	Swap(a, f1);
	cout << "after swapping a: " << a << " f1: " << f1 << endl;

	return 0;
}

