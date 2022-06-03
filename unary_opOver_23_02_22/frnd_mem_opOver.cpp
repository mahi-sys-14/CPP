#include<iostream>
using namespace std;

class B;
class A
{
	public:
		int x,y,result=0;

		A operator - (A obj2);
		friend B B :: operator + (B);

		A() //default Constructor
		{
			x=0;
			y=0;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		A(int r, int i) // parameterized constructor
		{
			x=r;
			y=i;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		void display()
		{
			cout << "x: " << x << endl;
			cout << "y: " << y << endl;
		}
};

class B
{
	public:
		int a,b,sum=0;

		B operator +(B obj);
		friend A A :: operator - (A obj2);
	
		B() //default Constructor
		{
			a=0;
			b=0;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		B(int r, int i) // parameterized constructor
		{
			a=r;
			b=i;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		void display()
		{
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}
};

B B :: operator + (B obj)
{
	B temp;
	
//	temp.sum = a+b;

	temp.a = a+obj.a;
	temp.b = b+obj.b;

	//cout<< "Value of add: " << temp << endl;
	return temp;
}

A A :: operator - (A obj2)
{
	A temp;

//	temp.result = x+y;

	temp.x = obj2.x - x;
	temp.y = obj2.y - y;
	
	//cout<< "Value of substraction is " << temp << endl;
	return temp;
}

int main()
{
	A a1(1,6), a2(3,9);
	B b1(12,5), b2(10,4);

	a1.display();
	
	B b3;
	b3=b1+b2;
	b3.display();

	return 0;
}
