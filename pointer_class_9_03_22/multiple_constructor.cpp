// An example of Access modifiers in inheritance and constructor and destructor

#include<iostream>
using namespace std;

class base1
{
	public:
		int i,j;

		base1()
		{
			cout << "Base1 default" << endl;
		}

		base1(int s)
		{
			i=s;
			cout << "Base1 parameterized" << endl;
		}
		~base1()
		{
			cout << "Base1 Destructor" << endl;
		}
};

class base2
{
	public:
		int x,y;

		base2()
		{
			cout << "Base2 default" << endl;
		}

		base2(int a)
		{
			x=a;
			cout << "Base2 parameterized" << endl;
		}

		~base2()
		{
			cout << "Base2 Destructor" << endl;
		}
};

class derived : public base1, public base2
{
	int k;
	public:

	derived()
	{
		cout << "Derived Default" << endl;
	}

	derived(int p, int q, int r):base1(q), base2(r)
	{
		cout << "derived parameterized" << endl;
		k=p;
	}

	void display() 
	{
		cout << "i: " << i << "x: " << x << "k: " <<  k  << endl;
	}

	~derived()
	{
		cout << "derived destructor" << endl;
	}
};

int main()
{
	derived d1(3,4,5);

	d1.display();

	return 0;
}
