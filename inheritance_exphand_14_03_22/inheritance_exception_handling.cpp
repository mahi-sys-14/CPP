#include<iostream>
#include<exception>

using namespace std;

class base {};
class derived : public base {};
//class derived {};

class derived2: protected derived {};

int main()
{
	try
	{
		throw derived();
	}
/*	catch(base b)
	{
		cout << "base object caught" << endl;
	}
*/	catch(derived d)
	{
		cout << "derived object caught" << endl;
	}
	catch(derived2 d)
	{
		cout << "derived2 object caught" << endl;
	}
	catch(base b)
	{
		cout << "base object caught" << endl;
	}

	return 0;
}
