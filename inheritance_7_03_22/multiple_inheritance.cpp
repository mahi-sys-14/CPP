// Simple example of Inheritance class

#include<iostream>

using namespace std;

class Doctor
{
	public:
		void Diagnose()
		{
			cout << "Diagonising" << endl;

		}
};

class Footballer
{
	public:
		void playFootball()
		{
			cout << "Football playing" << endl;

		}
};

class Businessman
{
	public:
		void runBusiness()
		{
			cout << "Running Business" << endl;
		}

};

class person : public Doctor, public Footballer, public Businessman
{
	public:
		int age, height, weight;

		void talk()
		{
			cout << "talking" << endl;
		}

		void walk()
		{
			cout << "walking" << endl;

		}

		void eat()
		{
			cout << "eating" << endl;

		}
};


int main()
{
	/* objects of all classes */
	person p1;
	Doctor d1;
	Footballer f1;
	Businessman b1;

	cout << "Calling walk from person" << endl;
	p1.walk();

	cout << "Calling eat from person" << endl;
	p1.eat();

	// Multiple Inheritance
	cout << "Calling Diagnose function of Doctor from person" << endl;
	p1.Diagnose();

	cout << "Calling play football function of footballer from person" << endl;
	p1.playFootball();

	cout << "Calling run business function of business man from person" << endl;
	p1.runBusiness();

	return 0;
}
