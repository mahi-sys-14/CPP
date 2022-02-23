// Here we are implementing two member function to class Measure to calculate area and volume of square and cuboid resp.

#include<iostream>

using namespace std;

class Measure {
	public:
		int height;
		int length;
		int width;

		void setInput(int a, int b, int c)
		{
			length = a;
			width = b;
			height = c;
		}

		// Area of square
		int area()
		{
			return length*width;
		}

		// Volume of Cuboid
		int volume()
		{
			return length*width*height;
		}
		
};

int main()
{
	Measure obj1, obj2;
	int l, w, h;

	cout<< "Enter length, width and height for area:" << endl;
	cin >> l >> w >> h;
	obj1.setInput(l, w, h);
	cout<<"The inputs are: "<<obj1.length <<" "<< obj1.width <<" "<< obj1.height << endl;
	cout<< "The area is : "<< obj1.area() << endl;

	cout<< "Enter length, width and height for volume: " << endl;
	cin >> l >> w >> h;
	obj2.setInput(l, w, h);
	cout<<"The inputs are: " <<obj2.length <<" "<< obj2.width <<" "<< obj2.height << endl;
	cout<< "The volume is : "<< obj2.volume() << endl;

	return 0;
}

