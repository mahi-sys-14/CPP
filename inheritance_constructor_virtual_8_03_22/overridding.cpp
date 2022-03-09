// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class ABC
{
	public:	
		void show()
		{
			cout << "This is parent class" << endl;
		}
};

class XYZ : public ABC
{
	public:

	void display()
	{
		cout << "This is child class" << endl;
	}
};

int main()
{
	ABC b; XYZ x;
	
	x.display();
	x.ABC::show();  

	return 0;
}
