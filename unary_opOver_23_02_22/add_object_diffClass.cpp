#include<iostream>
using namespace std;

class practice;
class test
{
	public:
		int i,j;
	
		test()
		{
			cout<< "default" << endl;
			i=0;
			j=0;
		}

		test(int i1, int j1)
		{
			cout<< "parameterized" << endl;
			i=i1;
			j=j1;
		}

		friend practice operator + (test t, practice p);
		void display()
		{
			cout << "i: " << i << endl << "j: " << j << endl;
		}

};

class practice
{
	public:
		int x,y;

		practice()
		{
			cout<< "default" << endl;
			x=0;
			y=0;
		}
		
		friend practice operator + (test t, practice p);

		practice(int x1, int y1)
		{
			cout<< "parameterized" << endl;
			x=x1;
			y=y1;
		}

		void display()
		{
			cout << "x: " << x << endl << "y: " << y << endl;
		}

};

practice operator + (test t, practice p)
{
	practice temp;

	temp.x=t.i+p.x;
	temp.y=t.j+p.y;

	return temp;
}

int main()
{
	test t1(2,4), t2(3,5);
	practice p2(1,3);

	practice p1;
	p1=t1+p2;
	p1.display();

	return 0;
}
