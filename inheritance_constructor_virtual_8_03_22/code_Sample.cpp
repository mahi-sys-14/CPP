// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class base
{
	private:
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

class derived : protected base
{
	int k;
	public:
	derived(int x)
	{
		k=x;
	}

	void display() 
	{
		cout << "k: " <<  k  << endl;
	}
};

int main()
{
	derived d(3);

	d.set(1,2);
	d.show();
	d.display();

	return 0;
}
