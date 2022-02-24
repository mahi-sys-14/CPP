// THIS CODE IS TO SHOW CONSTRUCTOR AND DESTRUCTOR

#include<iostream>
using namespace std;

class Distance
{
	public:
		int feet;
		int inch;

		Distance(int f,int i)// parameterized constructor
		{
			cout<<"Parameterized Constructor"<< endl;

			feet=f;
			inch=i;
			cout << "feet: " << feet << endl <<"inch: "<< inch << endl;
		}

		Distance(Distance &x) //copy constructor
		{
			feet=x.feet;
			inch=x.inch;
			cout<<"copy constructor"<<endl;

		}
		~Distance()
		{
			cout<<"Destructor"<<endl;
		}
};

int main()
{
	Distance d1(10,5);

	// copying one object to other
	Distance d2(d1);
	
	//Distance d3=d1;
	return 0;
}
