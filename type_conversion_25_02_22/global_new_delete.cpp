//new and delte operator overloading in class location

#include<iostream>
using namespace std;

class location {
	public:
		int lon, lat;

		location() //default constructor
		{
			cout << "Inside default location constructor" << endl;
			lon=0;
			lat=0;
		}

		location(int lo, int la) //parameterized constructor
		{
			cout << "Inside parameterized location constructor" << endl;
			lon=lo;
			lat=la;
		}

		void display() //display function
		{
			cout << "Lon " << lon << endl << "lat " << lat << endl;
		}
};

class demo {
	int i;
	public:
		demo() 
		{
			cout<< "Calling demo default constructor" << endl; 
		}

		demo(int x)
		{
			cout<< "Calling demo parameterized constructor" << endl;
			i=x;
		}

		void display() //display function
		{
			cout << "i " << i << endl;
		}

};

void * operator new (size_t size) //new operator overloading
{
	cout << "Inside new operator overloaded" << endl;
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL)
		cout<<"Memory is not allocated" << endl;
		return ptr;
	}

void operator delete (void *pt) //delete operator overloading
{
	cout << "Inside delete operator overloaded" << endl;
	free(pt);
}

int main()
{
	location loc1; //calling default constructor
	loc1.display();
	 
	location loc2(2,4); //calling parameterized constructor
	loc2.display();

	location *loc = new location; //calling new operator from class location
	loc->display();
	delete loc; //deleting location pointer

	// In class demo also new & delete operator are not called of class location, called default new & delete
	demo *d1 = new demo;
	d1->display();
	delete d1;

	return 0;
}
