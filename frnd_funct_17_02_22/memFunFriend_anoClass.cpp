// In this code we are making a member function of one class friend of another class

#include<iostream>
using namespace std;

class B;
class A
{
	private:
		int numA;
	public:
		int add(A, B);
		void setA(B obj2);
	/*	{
			cout << "In setA()" << endl;
			numA = 10;
			obj2.numB = 70;
			cout << "Before numA & numB: " << numA  << obj2.numB << endl;
		}*/		
};

class B
{
	private:
		int numB;
	public:
		friend int A :: add(A obj1, B obj2);
		friend void A :: setA(B obj);
		void setB()
		{
			cout << "In setB() "<< endl;
			numB = 20;
			cout << "Before numB=" << numB << endl;
		}

};

void A :: setA(B obj2)
{
	cout << "In setA()" << endl;
	//numA = 10;
	obj2.numB = 100;
	cout << "Before numB: " << obj2.numB << endl;
}

int A :: add(A obj1, B obj2)
{
	cout << "In add" << endl;
	obj1.numA = 30;
	obj2.numB = 40;

	cout<< "After numA=" << obj1.numA << " numB=" << obj2.numB << endl;

	return obj1.numA+obj2.numB;
}

int main()
{
	A obj1;
	B obj2;

	obj1.setA(obj2);
	obj2.setB();

	//obj1.add(obj1, obj2);
	cout<< "Sum is: " << obj1.add(obj1, obj2) << endl;
	return 0;
}
