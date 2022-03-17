#include<iostream>
using namespace std;

int main()
{
	int n1, n2, result=0;

	cout << "Enter two numbers to Divide" << endl;

	cout << "Enter number 1" << endl;
	cin >> n1;
	cout << "Enter number 2" << endl;
	cin >> n2;

	try
	{
		if(n2 == 0)
		{
			throw n2;
		}
		else
		{
			result = n1/n2;
			cout << "result is: "<< result << endl;
		}
	}

	catch(int x)
	{
		cout << "Can't Divide by: " << x << endl;
	}

	cout << "End of program" << endl;
	
	return 0;
}
