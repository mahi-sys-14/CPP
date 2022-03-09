#include<iostream>

using namespace std;

class student
{
	private:
		int marks;
	       	char name[20];
	public:
		int rollno;

		void getdata()
		{
			cout << "Enter name of the student" << endl;
			cin.getline(name,20);
			cout << "Enter marks of the subject" << endl;
			cin >> marks;
			cout << "Enter the roll no of the student" << endl;
			cin >> rollno;
		}

		void printdata()
		{
			cout << "Name of the student is: " << name << endl;
			cout << "Marks of the subject is: " << marks << endl;
			cout << "Roll no of the student is: " << rollno << endl;
		}
};

class derived : public student
{
	public:
		derived()
		{
			//cout << "derived default" << endl;
		}
};

int main()
{
	derived d[3];
	derived *ptr;

	ptr=&d[0];

	for(int i=0; i<3; i++)
	{
		ptr->getdata();
		ptr++;
		char temp=getchar();
	}

	ptr=&d[0];

	cout << endl << "Students information is as follows" << endl;
	for(int i=0; i<3; i++)
	{
		ptr->printdata();
		ptr++;
	}
	
	return 0;
}
