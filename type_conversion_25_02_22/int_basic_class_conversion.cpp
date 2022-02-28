// basic to class type conversion

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

	Time(int x)
	{
		cout << "Inside parameterized constructor" << endl;
		hour=x/60;
		min=x%60;
	}

	void display()
	{
		cout << "Hour: " << hour << endl << "min: " << min << endl;
	}

};

int main()
{
	Time t1;
	int j=10;

	t1=j;
	t1.display();

	return 0;
}
