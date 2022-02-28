// class to basic(int) type conversion

#include<iostream>
using namespace std;

class Time {
	int hour, min;
	
	public:

	Time()
	{
		cout <<"Inside default constructor" << endl;
		hour=0;
		min=0;
	}

	Time(int x, int y)
	{
		cout << "Inside parameterized constructor" << endl;
		hour=x;
		min=y;
	}

	operator int ()
	{
		int temp;
		temp = hour*60 + min;

		return temp;
	}

	void display()
	{
		cout << "Hour: " << hour << endl << "min: " << min << endl;
	}

};

int main()
{
	Time t1(4, 6);
	int j=0;

	t1.display();

	j=t1;
	cout << "Value of j: " << j << endl;

	return 0;
}
