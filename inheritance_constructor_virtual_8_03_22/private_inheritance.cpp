// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class base
{
	protected:
		int i,j;
	public:

		void set(int a, int b)
		{
			i=a;
			j=b;
		}

		void show()
		{
			cout << i << " " << j << endl;
		}
};

class derived : public base
{
	int k;
	public:

	void setk()
	{
		k = i*j;
	}

	void showk() 
	{
		cout << "k: " <<  k  << endl;
	}

//	base b1;
//	b1.show();
};

class derived2 : public derived
{
	int m;
	public:

	void setm()
	{
		m =i-j;
	}

	void showm() 
	{
		cout << "m: " <<  m  << endl;
	}
};

int main()
{
	derived d1;
	derived2 d2;

	d1.set(1,2);
	d1.show();
	d1.setk();
	d1.showk();

	d2.set(3,4);
	d2.show();

	return 0;
}
