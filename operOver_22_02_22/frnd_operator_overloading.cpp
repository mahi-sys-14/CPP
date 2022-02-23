#include<iostream>
using namespace std;

class Complex {
	public:
	int real, img;

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

		friend Complex operator + (Complex , Complex);
/*
		Complex operator - (Complex obj)
		{
			Complex temp;
			//cout << "Real: "<< real << " Image: " << img << endl;

			temp.real = obj.real - real;
			temp.img = obj.img - img;
			return temp;
		}

		Complex operator * (Complex obj)
		{
			Complex temp;
			//cout << "Real: "<< real << " Image: " << img << endl;

			temp.real = obj.real * real;
			temp.img = obj.img * img;
			return temp;
		}

		Complex operator / (Complex obj)
		{
			Complex temp;
			//cout << "Real: "<< real << " Image: " << img << endl;

			temp.real = obj.real / real;
			temp.img = obj.img / img;
			return temp;
		}
*/
};

Complex operator + (Complex obj, Complex obj2)
{
	Complex temp;
	//cout << "Real: "<< real << " Image: " << img << endl;

	temp.real = obj.real + obj2.real;
	temp.img = obj.img + obj2.img;
	return temp;
}

int main()
{
	Complex c1(1,1), c2(3,3);
	c1.display();
	c2.display();

	Complex c3;
	c3 = c2+c1;
	c3.display();

//	c3 = c1.operator + (c2);
//	c3.display();
/*
	Complex c4;
	c4 = c2-c1;
	c4.display();
*/
	return 0;
}
