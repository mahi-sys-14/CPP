// In this code we have used parameterized constructors

#include <iostream>
using namespace std;
 
class Point
{
	private:
    	int x, y;
 
	public:
    	// Parameterized Constructor
    	Point(int x1, int y1)
    	{
		cout << "This is parameterized constructor" << endl;
        	x = x1;
	        y = y1;
    	}
 
	int getX()
	{
		cout<< "Getting value of x" << endl;
        	return x;
    	}
    	
	int getY()
    	{
		cout << "Getting Value of y" << endl;
        	return y;
    	}

	void display()
	{
		cout << "x: " << x << endl << "y: " << y << endl;
	}
};
 
int main()
{
    // Constructor called
    Point p1(10, 15);
 
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << endl << "p1.y = " << p1.getY() << endl;

    p1.display();

    return 0;
}
