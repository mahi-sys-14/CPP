#include<iostream>
using namespace std;

template<typename T>
void fun(const T &x)
{
	static int i=10;
	cout << "value of i: " << ++i << endl;
	cout << "value of x: " << x << endl;
	cout << endl;
}


int main()
{
	fun <int>(1);
	fun <int>(2);

	fun <double>(10.5);

	return 0;
}
