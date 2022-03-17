#include<iostream>
using namespace std;

int main()
{
	int a=1;

	try
	{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout << "Exception in inner try-catch blocks" << endl;
			throw x;
		}
	}
	catch(int b)
	{
		cout << "Exception in outer try-catch block" << endl;
	}

	cout << "End of program" << endl;
	
	return 0;
}
