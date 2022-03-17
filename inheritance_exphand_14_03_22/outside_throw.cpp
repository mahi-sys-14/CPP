#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout << "inside Xtest, test is: "<< test << endl;
	if(test)
		throw test;
}

int main()
{
	cout << "start" << endl;

	try
	{
		cout << "Inside the try block" << endl;
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch(int i)
	{
		cout << "Caught an exception -- value is " << endl;
		cout << i << endl;
	}

	cout << "end of program" << endl;

	return 0;
}

