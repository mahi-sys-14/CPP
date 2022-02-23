#include<iostream>

using namespace std;

class Calculator {
	public:
		int input1;
		int input2;
		int input3;

		void setInput(int a, int b)
		{
			input1 = a;
			input2 = b;
		}

		// Calculator class objects are passed as arguments
		// Returning object
		Calculator add(Calculator obj1, Calculator obj2)
		{
			Calculator obj3;
			obj3.input3 = obj2.input2 + obj1.input2;
			cout<< "The result of add is : "<< obj3.input3 << endl;

			return obj3;
		}

		int sub()
		{
			return input1-input2;
		}
		
		
		int mul(int a, int b)
		{
			return a*b;
		}
		
};

int main()
{
	Calculator obj1, obj2, obj3;
	obj1.setInput(12, 17);
	obj2.setInput(6, 9);
	obj3.input3 = 0;

	// passing object as arguments and printing addition
	cout<<"The inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The inputs are:" <<obj2.input1<<" "<< obj2.input2 <<endl;

	obj3 = obj3.add(obj1, obj2);
	cout<< "The result of add in main is : "<< obj3.input3 << endl;

	return 0;
}

