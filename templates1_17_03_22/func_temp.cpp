#include<iostream>

using namespace std;

template <typename T1, typename T2, typename T3>

T3 sum(T1 n1, T2 n2)
{
	T3 rs;
	rs = n1+n2;
	return rs;
}

int main()
{
	int A =10, B=20, C;
	long a=11, b=21, c;
	float f1=22.8, f2=33.0, f3;

	C = sum(A,b);
	cout << "The sum of int: " << C << endl;
/*
	c = sum(a, b);
	cout << "The sum of long: " << c << endl;

	f3 = sum(f1, b);
	cout << "The sum of flaot and long: " << f3 << endl;
*/
	return 0;
}
