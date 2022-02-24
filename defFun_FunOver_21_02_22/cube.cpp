// A simple program to calculate cube 

#include<iostream>
using namespace std;

int cube(int a)
{
	cout << "Inside the function" << endl;
	return a*a*a;
}

int main()
{
	int a;
	cout << "Give side of cube" << endl;
	cin >> a;

	cout << "cube is : "<< cube(a) << endl;
	return 0;
}


