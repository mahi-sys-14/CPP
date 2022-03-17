#include<iostream>

using namespace std;

class Shape
{
	protected:
		int x;
	public:
		void getdata()
		{
			cin >> x;
		}
		virtual float calculatearea()
		{
			
		}

};

class Square : public Shape
{
	public:
		float calculatearea()
		{
			return x*x;
		}
};

class Circle : public Shape
{
	public:
		float calculatearea()
		{
			return 3.14*x*x;
		}

};

int main()
{
	Circle c;
	Square s;

	cout << "Enter the sides of square" << endl;
	s.getdata();
	cout << "Area of square is:" << s.calculatearea() << endl;

	cout << "Enter the radius of circle" << endl;
	c.getdata();
	cout << "Area of circle is: " << c.calculatearea() << endl;


	return 0;
}
