// Here we have made funcions for addition, substractio, multiplication

#include<iostream>

using namespace std;

class Calculator {
	public:
		int input1;
		int input2;

		void setInput(int a, int b)
		{
			input1 = a;
			input2 = b;
		}

		// Addition
		int add()
		{
			return input1+input2;
		}

		// Substraction
		int sub()
		{
			return input1-input2;
		}
		
		// Multiplication passing arguments
		int mul(int a, int b)
		{
			return a*b;
		}
		
};

int main()
{
	Calculator obj1;

	obj1.setInput(12, 17);
	cout<<"The inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<< "The result of add is : "<< obj1.add() << endl;

	obj1.setInput(10, 12);	
	cout<<"The inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The product of multiplication is:" << obj1.mul(10, 12) << endl;

	cout<<"The inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The result of substraction is:" << obj1.sub() << endl;

	cout<< "The result of add is : "<< obj1.add() << endl;

	return 0;
}

