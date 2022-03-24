#include<iostream>

using namespace std;

template <class T1, class T2>
class sample
{
	T1 a;
	T2 b;

	public:

	sample(T1 x, T2 y)
	{
		a = x;
		b = y;
	}

	void getdata()
	{
		cout << "Enter a & b" << endl;
		cin >> a >> b;
	}

	void display()
	{
		cout << "the values: " << endl;
		cout << "a: " << a <<  endl << "b: " << b << endl;
	}

}; //end of class

int main()
{
	// trying through constructor
	sample s1(2, 6);
	sample s2(4, 4.9);
	sample s3(5.2, 8.6);
	sample s4(4.1, 5);

	// passing data types of the variables in format of template to the class
/*
	sample <int, int> s1;
	sample <int, double> s2;
	sample <double , double> s3;
	sample <double, int> s4;

	cout << "Integer data: "<< endl;
	s1.getdata();

	cout << "Integer and double data: "<< endl;
	s2.getdata();

	cout << "Double data: "<< endl;
	s3.getdata();

	cout << "Double and Integer data: "<< endl;
	s4.getdata();
*/
	cout << "Integer data: "<< endl;
	s1.display();

	cout << "Integer and double data: "<< endl;
	s2.display();

	cout << "Double data: "<< endl;
	s3.display();

	cout << "Double and Integer data: "<< endl;
	s4.display();

	return 0;
}
