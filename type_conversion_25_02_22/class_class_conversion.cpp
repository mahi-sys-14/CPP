// class to class type conversion

#include<iostream>
using namespace std;

class Time1 {
	public:
	int hour, min;

	Time1() //default constructor
	{
		cout <<"Inside default constructor" << endl;
		hour=0;
		min=0;
	}

	Time1(int x, int y) //paramterized constructor
	{
		cout << "Inside parameterized constructor" << endl;
		hour=x;
		min=y;
	}

	void display() //display function
	{
		cout <<"Hour: "<< hour<<"hr"<<endl <<"min: "<<min<<"min"<< endl;
	}

};

class Time2 {
	int hour, min;
	
	public:

	Time2() //default constructor
	{
		cout <<"Inside default constructor" << endl;
		hour=0;
		min=0;
	}

	Time2(int x, int y) //paramterized constructor
	{
		cout << "Inside parameterized constructor" << endl;
		hour=x;
		min=y;
	}

	void display() //display function
	{
		cout<<"Hour: "<< hour<<"hr"<< endl<<"min: "<< min<<"min"<< endl;
	}

	void operator = (Time1 t);
/*	{
		hour=t.hour;
		min=t.min;
	}
*/
};

void Time2 :: operator = (Time1 t)
{
	hour=t.hour;
	min=t.min;
}

int main()
{
	Time1 t1(2, 30);
	t1.display();

	Time2 t2;
	cout << "Before Class to Class conversion" << endl;
	t2.display();

	// class to class conversion
	t2=t1;
	cout << "After Class to Class conversion" << endl;
	t2.display();

	return 0;
}
