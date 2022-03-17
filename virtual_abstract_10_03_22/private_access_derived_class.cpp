#include<iostream>

using namespace std;

class base
{
	int i;
	public:
		int j,k;

		void set(int a)
		{
			j=a;
		}

		int get()
		{
			cout << "base value of j: " << j << endl;
			return j;
		}
};

class derived : private base
{
	public:
	
		void set(int p)
		{
			k=p;
		}

		int get()
		{
			cout << "derived value of k: " << k << endl;
			return k;
		}

};

class derived2 : public derived
{
	public:
		int j;	
		void set(int t)
		{
			j=t;
		}

		int get()
		{
			cout << "derived2 value of j: " << j << endl;
			return j;
		}

};

int main()
{
	base b;
	derived d;
	derived d2;

	b.set(3);
	cout << b.get() << endl;

	d.set(4);
	cout << d.get() << endl;

	d2.set(7);
	cout << d2.get() << endl;

	return 0;
}
