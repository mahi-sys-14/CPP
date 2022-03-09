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

		void show()
		{
			cout << "Display of base" << endl;
		}

		~base1()
		{
			cout << "Base1 Destructor" << endl;
		}
};

class derived : public base1
{
	int k;
	public:

	derived()
	{
		cout << "Derived Default" << endl;
	}

	derived(int p)
	{
		cout << "derived parameterized" << endl;
		k=p;
	}

	void display() 
	{
		cout << "k: " <<  k  << endl;
	}

	~derived()
	{
		cout << "derived destructor" << endl;
	}
};

int main()
{
	base1* ptr;
	base1 b;
	derived d;

//	ptr=&b;

	ptr=&d;

	ptr->show();
	((derived *)ptr)->display();

	return 0;
}
