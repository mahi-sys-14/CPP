#include<iostream>

using namespace std;

template <class T1>
void sum(T1 a, T1 b, T1 c)
{
	cout << "sum is: "<< a+b+c << endl;
}

template <class T1, class T2>
void sum(T1 a, T2 b, T1 c)
{
	cout << "sum is: "<< a+b+c << endl;
}

void sum(int a, int b)
{
	cout << "sum is: " << a+b << endl;
}

int main()
{
	int a, b, c;
	float x, y, z;

	cout << "Enter 3 int values a, b, c" << endl;
	cin >> a >> b >> c;

	cout << "Enter 3 float values x, y, z" << endl;
	cin >> x >> y >> z;

	sum(a, b, c);
	sum(a,b);
	sum(a, x, b);	
	sum(a, y, b);

	return 0;
}
