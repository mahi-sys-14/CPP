// This code is to catch a exception for a given number entered by user to check it's odd or even


#include<iostream>
using namespace std;

class Test
{
	int x;

	public:

	void read()
	{
		cout << "Enter a number" << endl;
		cin >> x;
	}

	class EVEN {}; //abstract class exception
	class ODD {};

	void check()
	{
		if(x%2 == 0)
		{
			throw EVEN(); //raise exception
		}
		else
		{
			throw ODD(); //raise exception
		}
	}
};

int main()
{
	Test t;
	t.read();

	try
	{
		t.check();
	}
	catch(Test :: EVEN) //Exception Handler blocker
	{
		cout << "Number is even" << endl;
	}

	catch(Test :: ODD) //Exception handler blocker
	{
		cout << "Number is odd" << endl;
	}

	return 0;
}
