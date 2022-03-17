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
		if(n1 >= 'a' || n2 <= 'z') 
		{
			throw 1.2;
		}

		if(n2 != n1)
		{
			float div = (float)n1/n2;
			if(div < 0)
				throw 'e';
			cout << "Division is: " << div << endl;
		}
		else
		{
			throw n2;
		}
	}

	catch(int x)
	{
		cout << "Exception: Division by zero " << endl;
	}

	catch(char str)
	{
		cout << "Exception: division is less than zero" << endl;
	}

	catch(...)
	{
		cout << "Exception: Unknown" << endl;
	}

	cout << "End of program" << endl;
	
	return 0;
}
