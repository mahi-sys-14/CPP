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
	demo d[3] = {55, 66, 77}; 
	demo *ptr = d;
	int i;

	for(i=0; i<3; i++)
	{
		cout << "Value of array: "<< ptr->getdata() << endl;
		ptr++;
	}	

	return 0;
}
