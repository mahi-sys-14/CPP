// Simple example of Inheritance class

#include<iostream>

using namespace std;

class person
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

class Doctor : public person
{
	public:
		void Diagnose()
		{
			cout << "Diagonising" << endl;

		}
};

class Footballer : public person
{
	public:
		void playFootball()
		{
			cout << "Football playing" << endl;

		}
};

class Businessman : public person
{
	public:
		void Runbusiness()
		{
			cout << "Running Business" << endl;

		}
};

class physio : public Doctor
{
	public:
		void exercise()
		{
			cout << "Excercise" << endl;
		}
};

int main()
{
	/* objects of all classes */
	person p1;
	Doctor d1;
	Footballer f1;
	Businessman b1;
	physio ph;

	cout << "Calling walk from person" << endl;
	p1.walk();

	// Single level Inheritance
	cout << "Calling Walk from Doctor" << endl;
	d1.walk();
	cout << "Calling Diagnose from Doctor" << endl;
	d1.Diagnose();

	cout << "Calling eat from footballer" << endl;
	f1.eat();
	cout << "Calling play football from footballer" << endl;
	f1.playFootball();

	cout << "Calling talk from businessman" << endl;
	b1.talk();
	cout << "Calling run business from businessman" << endl;
	b1.Runbusiness();

	// Multilevel Inheritance
	cout << "Calling Walk of person from physio" << endl;
	ph.walk();
	cout << "Calling Diagnose function of doctor from physio" << endl;
	ph.Diagnose();
	cout << "Calling excercise from physio" << endl;
	ph.exercise();

	return 0;
}
