// This is a sample program of static integer

#include<iostream>
using namespace std;

class demo
{
	private:
		static int count; //declaration of static integer
	public:
		void setCount()
		{
			cout<< "Count value: " << ++count << endl;
		}
};

int demo :: count=10;  //definition of static integer 

int main()
{
	demo d1, d2, d3;

	d1.setCount();
	d2.setCount();
	d3.setCount();

	return 0;
}
