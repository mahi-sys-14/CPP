#include<iostream>

using namespace std;

class base
{
	public:
		virtual void show()
		{
			cout << "Base" << endl;
		}

};

class derived1 : public base
{
	public:
		void show()
		{
			cout << "Derived 1" << endl;
		}

};

class derived2 : public derived1
{
	public:
		void show()
		{
			cout << "Derived 2" << endl;
		}

};

int main()
{
	derived1 d1;
	derived2 d2;
	base *ptr;
	ptr=&d1;
	ptr->show();
	ptr=&d2;
	ptr->show();


	return 0;
}
