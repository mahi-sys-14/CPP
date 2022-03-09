#include<iostream>

using namespace std;

class demo
{
	public:
		int i;

		demo(int x)
		{
			i=x;
		}

		int getdata()
		{
			return i;
		}
};

int main()
{
	demo d(5), *ptr;
	ptr=&d;

	cout<< "Value of i: " << ptr->getdata()<< endl;

	return 0;
}
