#include<iostream>

using namespace std;

template <class T1, class T2>
class sample
{
	T1 a;
	T2 b;
	static int c;

	public:

	void getdata()
	{
		cout << "Enter a & b" << endl;
		cin >> a >> b;

		++a;
		++b;
		++c;
		
	}

	void display()
	{
		cout << "the values: " << endl;
	//	cout << "a: " << a <<  endl << "b: " << b << endl;
		cout << "a: " << a <<  endl << "b: " << b << endl << "c: " << c << endl;

	}

}; //end of class

template <typename T1, typename T2>
int sample<T1,T2> :: c=1;

int main()
{

	// passing data types of the variables in format of template to the class
	sample <int, int> s1;
	sample <int, int> s5;
	sample <int, double> s2;
	sample <double , double> s3;
	sample <double, int> s4;

	cout << "Integer data: "<< endl;
	s1.getdata();
	s1.getdata();
	s5.getdata();

	cout << "Integer and double data: "<< endl;
	s2.getdata();

	cout << "Double data: "<< endl;
	s3.getdata();

	cout << "Double and Integer data: "<< endl;
	s4.getdata();

	cout << "Integer data: "<< endl;
	s1.display();
//	s5.display();

	cout << "Integer and double data: "<< endl;
	s2.display();

	cout << "Double data: "<< endl;
	s3.display();

	cout << "Double and Integer data: "<< endl;
	s4.display();

	return 0;
}
