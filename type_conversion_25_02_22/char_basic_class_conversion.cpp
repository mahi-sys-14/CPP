// basic to class type conversion
// In this as we have called both parameterized and assignment operator, assignment operator overload in this case

#include<iostream>
#include<string.h>

using namespace std;

class String {
	char str[10];
	
	public:

	String() //default constructor
	{
		cout <<"Inside default constructor" << endl;
		strcpy(str,"Hello");
	}

	String(char *x) //parameterized constructor
	{
		cout << "Inside parameterized constructor" << endl;
		cout << "String: " << str << endl;

		strcat(str,x);
	}

	void display() //display function
	{
		cout << "String: " << str << endl;
	}

	void operator = (char *y) // Operator Overloading
	{
		cout<< "Inside Assingment operator Overloading" << endl;
//		cout << "String: " << str << endl;
		strcat(str,y);
	}
};

int main()
{
	String s1; //calling default constructor
	char s[]=" World!";
	s1.display();

//	String s2(s);

	s1=s; // basic (char) to class conversion
	s1.display();

	return 0;
}
