// An example of Access modifiers in inheritance

#include<iostream>
using namespace std;

class ABC
{
	protected:
		int m_prot_mem;
		void protfunc()
		{
			cout << "Access Aloowed" << endl;
		}
	public:

		void setProtMemb(int i)
		{
			m_prot_mem=i;
		}

		void show()
		{
			cout << m_prot_mem << endl;
		}
};

class XYZ : public ABC
{
	public:

	void useProtFunc()
	{
		protfunc();
	}
};

/*
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
*/
int main()
{
	ABC b; XYZ x;

//	b.m_prot_mem;

	b.setProtMemb(0);
	b.show();
//	b.protfunc();
	x.show();
	x.setProtMemb(5);
	x.useProtFunc();

	/*
	derived d1;
	derived2 d2;

	d1.set(1,2);
	d1.show();
	d1.setk();
	d1.showk();

	d2.set(3,4);
	d2.show();
*/
	return 0;
}
