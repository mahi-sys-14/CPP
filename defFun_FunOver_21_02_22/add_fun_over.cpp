// In this program addition function is overloaded as sum(), by passing different arguments of different numbers, orders and data types

#include<iostream>
using namespace std;
/*
int sum(int a, int b)
{
	return a+b;
}
*/
int sum(int a, float d)
{
	return a+d;
}

float sum(int a, int b)
{
	return a+b;
}

int sum(float d, int c)
{
	return d+c;
}

float sum(float d, float c)
{
	return d+c;
}

int sum(int b, int c, int a)
{
	return b+c+a;
}

int sum(int b, float d, int a)
{
	return b+d+a;
}

int main()
{
	int a=8, b=12, c=10;
	float d=5.9, e=12.8;
/*
	cout <<"Enter the 3 int & 2 float resp numbers: " << endl;
	cin >> a >> b >> c >> d >> e;
*/

//	cout << "result of -int sum(int , int)- is: " << sum(a, b) << endl;
	cout << "result of -int sum(int , float)- is: " << sum(a, d) << endl;
	cout << "result of -float sum(int , int)- is: " << sum(a, b) << endl;
	cout << "result of -int sum(float , int)- is: " << sum(d, c) << endl;
//	cout << "result of -int sum(float , float)- is: " << sum(d, e) << endl;	
	cout << "result of -float sum(float , float)- is: " << sum(d, e) << endl;	
	cout << "result of -int sum(int , int, int)- is: " << sum(a, b, c) << endl;	
	cout << "result of -int sum(int, float, int)- is: " << sum(b, d, a) << endl;

	return 0;
}
