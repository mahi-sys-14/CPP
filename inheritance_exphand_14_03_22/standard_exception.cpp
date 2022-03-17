#include<iostream>
#include<exception>

using namespace std;

int main()
{
	try
	{
		int *myarray = new int[1000]; //1999999999990000 //while allocating more memory gives bad alloc exception
		// no need to throw separately
		*myarray = 10/0; //floating point exception
	}

	catch(exception &e)
	{
		cout << "std exception" << e.what() << endl;
	}

	return 0;
}
