#include<iostream>
using namespace std;

void demo() throw(int,double)
{
	int a=2;
/*
	cout << "1 | 2 | any number" << endl;
        cin >> a;	
*/
		if(a==1)
			throw a;
		else if(a==2)
			throw 'e';
		else
			throw 1.2;


}

int main()
{
	try
	{
		demo();
	}

	catch(int x)
	{	cout << "Exception: value is 1" << endl;
	}

	catch(char c)
	{	cout << "Exception: value is 2" << endl;
	}

	catch(double d)
	{	cout << "Exception: else part" << endl;
	}

	return 0;
}

