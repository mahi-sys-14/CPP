#include<iostream>
using namespace std;

class A
{
	private:
		int numA;
	public:
		void setA()
		{
			cout << "In stA()" << endl;
			numA = 10;
		}
};

class B
{
	private:
		int numB;
	public:
		friend void add(B obj);
		void setB()
		{
			cout << "In setB() "<< endl;
			numB = 20;
			cout << "Before numB=" << numB << endl;
		}

		//cout << "Before numB=" << numB << endl;

};

void add(B obj)
{
	cout << "In add" << endl;
	//numA = 30;
	obj.numB = 40;

	cout<< "After numB=" << obj.numB << endl;
}

int main()
{
	A obj1;
	B obj2;

	obj2.setB();

	add(obj2);

	return 0;
}
