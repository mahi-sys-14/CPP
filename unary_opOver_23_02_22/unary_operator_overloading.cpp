// In this code we are overloading unary operators (-, !, ~, --, ++)

#include<iostream>
using namespace std;

class Complex {
	int real, img;
	public:
		Complex()
		{
			real=0;
			img=0;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		Complex(int r, int i)
		{
			real=r;
			img=i;
			//cout << "Real: "<< real << " Image: " << img << endl;
		}

		void display()
		{
			cout << "Real: "<< real << " Image: " << img << endl;
		}

		Complex operator -();
		void operator !();
//		void operator --();
//		void operator ++();

		Complex operator --();
		Complex operator ++();

		Complex operator --(int);
		Complex operator ++(int);

		Complex operator ~();

};

Complex Complex::operator -()
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real = -real;
	temp.img = -img;

	return temp;
}

void Complex::operator !()
{
	//cout << "Real: "<< real << " Image: " << img << endl;

	real = !real;
	img = !img;
}

Complex Complex::operator --()
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real=--real;
	temp.img=--img;

	return temp;
}

Complex Complex::operator ++()
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real=++real;
	temp.img=++img;

	return temp;
}

Complex Complex::operator --(int)
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real=real--;
	temp.img=img--;

	return temp;
}

Complex Complex::operator ++(int)
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real=real++;
	temp.img=img++;

	return temp;
}

Complex Complex::operator ~()
{
	//cout << "Real: "<< real << " Image: " << img << endl;
	Complex temp;

	temp.real = ~real;
	temp.img = ~img;

	return temp;
}

int main()
{
	Complex c1(2,5);
	c1.display();

	Complex c2;

	cout<<"Unary minus"<<endl;
	c2=(-c1);
	c2.display();
/*
	cout<<"Unary Complement"<<endl;
	!c1;
	c1.display();
*/
	Complex co;
	cout<<"Pre Decreement operator"<<endl;
	co=--c1;
	co.display();


	cout<<"Pre Increement operator"<<endl;
	c1=++c1;
	c1.display();

	Complex c(6,9);

	Complex c5;

	cout<<"Negation(~)"<<endl;
	c5=~c;
	c5.display();

	Complex c3;
	cout<<"Post Decreement operator"<<endl;
	c3=c--;
	c3.display();

	Complex c4;
	cout<<"Post Increement operator"<<endl;
	c4=c++;
	c4.display();
//	cout<<"c display"<<endl;
//	c.display();

	return 0;
}
