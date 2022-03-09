// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class base
{
	private:
		int i,j;
	public:
		base()
		{
			cout << "Base default" << endl;
		}

		void set(int a, int b)
		{
			i=a;
			j=b;
		}

		void show()
		{
			cout << i << " " << j << endl;
		}

		~base()
		{
			cout << "Base Destructor" << endl;
		}
};

class derived : public base
{
	int k;
	public:
	derived()
	{
		cout << "derived Default" << endl;
	}

	derived(int i)
	{
		cout << "derived parameterized" << endl;
		k=i;
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
	base b;
	derived d1;
	derived d(3);

	d.set(1,2);
	d.show();
	d.display();

	return 0;
}
