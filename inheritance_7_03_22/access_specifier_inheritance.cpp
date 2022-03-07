// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class base
{
	private:
		int y;
	protected:
		int z;

	public:
		int x;
		
		void add()
		{
			y=10, z=20;
			cout << "x: " <<  x << " y:" << y << " z: " << z << endl;

			x = y+z;
			cout<< "Value of x is: " <<  x << endl;
		}
};

class derived : public base
{
	public:
	void display() 
	{
		cout << "x: " <<  x << " z: " << z << endl;
	}
};

class double_derived : public derived
{
	public:
	void display2() 
	{
		z = z+10;
		cout << "x: " <<  x << " z: " << z << endl;
	}
};

int main()
{
	base b;
	derived d;
	double_derived dd;

	cout << "Calling add from" << endl;
	b.add();

	cout << "Calling add from derived" << endl;
	d.add();

	cout << "Calling display of derived" << endl;
	d.display();

	cout << "Calling add from double derived" << endl;
	dd.add();

	cout << "Calling display of derived from double derived" << endl;
	dd.display();

	cout << "Calling display2 of double derived" << endl;
	dd.display2();

	return 0;
}
