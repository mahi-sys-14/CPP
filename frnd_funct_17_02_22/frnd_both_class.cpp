// In this program we are making a function display() outside the class friend to both the class rectangle and square

#include<iostream>
using namespace std;

class Rectangle;
class Square
{
	private:
		int side;
	public:
		void setS()
		{
			cout << "Enter side of square: "<< endl;
			cin >> side;
		}
		friend void display(Rectangle, Square);

};

class Rectangle
{
	private:
		int length, breath;
	public:
		void setR()
		{
			cout << "Enter length and breath: "<< endl;
			cin >> length >> breath;
		}
		friend void display(Rectangle, Square);

};

void display(Rectangle R, Square S)
{
	cout<< "Area of Square: " << S.side*S.side << endl;
	cout<< "Area of Rectangle: " << R.length*R.breath << endl;
}

int main()
{
	Square s;
	Rectangle r;

	s.setS();
	r.setR();
	
	display(r, s);

	return 0;
}
