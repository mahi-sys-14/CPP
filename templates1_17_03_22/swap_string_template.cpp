#include<iostream>

using namespace std;

template <typename T1, typename T2>

void Swap(T1 &n1, T2 &n2)
{
	T2 n3;

	// for same data types
/*	n3 = n1;
	n1 = n2;
	n2 = n3;
*/
	// for different data types

	n3 = (T2)n1;
	n1 = (T1)n2;
	n2 = n3;

}

int main()
{
	int a=10, b=30;
	float f1=2.9, f2=5.6;
	string s1="pranali" , s2="mahima";

	cout << "before swapping s1: " << s1  << " s2: " << s2 << endl;
	Swap(s1, s2);
	cout << "after swapping s1: " << s1 << " s1: " << s2 << endl;

	cout << "before swapping a: " << a << " f1: " << f1 << endl;
	Swap(a, f1);
	cout << "after swapping a: " << a << " f1: " << f1 << endl;

	return 0;
}

