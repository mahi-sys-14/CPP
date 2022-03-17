#include<iostream>
#include<exception>

using namespace std;

class Myexception : public exception
{
	public:

		const char * what() const throw()
		{
			return "Attempted to divide by zero";
		}
};

int main()
{
	try
	{
		float x, y;
		cout << "Enter two values for division" << endl;
		cin >> x >> y;

		if(y==0)
		{
			Myexception z;
			throw z;
		}
		else
		{
			float div = x/y;
			cout << "Division is: " << div << endl;
		}
	}
	
	catch(exception &e)	
	{
		cout << "caught exception is: " << e.what() << endl;
	}

	cout << "End of program\n";
	return 0;
}
