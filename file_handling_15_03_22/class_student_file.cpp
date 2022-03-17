#include<iostream>
#include<fstream>

using namespace std;

class student
{
	int roll;
	char name[50]; 
	float marks;

	void getdata()
	{
		cout << "enter the roll number, name and marks" << endl;
		cin >> roll;
		cin >> name;
		cin >> marks;
	}

	public:

	void addRecord()
	{
		fstream f;
		student su;

		f.open("student.txt", ios::app|ios::binary);
		su.getdata();

		f.write((char *)&su, sizeof(su));
		f.close();
	}

	void display(int count)
	{
		fstream f;
		student su;
		int c=0;

		f.open("student.txt", ios::in|ios::binary);
/*
		while(!f.eof())
		{
			c++;
		}

		cout << "c: " << c << endl << "count: " << count << endl;
		int index = c+count;
		cout << "total index: " << index << endl;
*/
		// using counter printing student details		
		for(int i=0; i<count; i++)
		{
			f.read((char *) &su, sizeof(su));

			cout << "roll no: " << su.roll << endl << "name: " << su.name << endl;
			cout << "marks: " << su.marks << endl;
		}

		// using end of file in this last updated data is printed 2 times
		
/*		while(!f.eof())
		{
		f.read((char *) &su, sizeof(su));

		cout << "roll no: " << su.roll << endl << "name: " << su.name << endl;
		cout << "marks: " << su.marks << endl;
		}
*/
		f.close();
	} //end display

};

int main()
{
	student s1;
	int count=0, index=0;
	fstream f;

	char ch = 'n';
	do
	{
		s1.addRecord();
		cout << "want add more?(y/n)" << endl;
		char temp=getchar();
		ch=getchar();
		cout << "User choice: " << ch << endl;
		count++;
		cout << "count increemented: " << count << endl;

	}while(ch=='y' || ch=='Y');
/*
	while(!f.eof())
	{
		count++;
	}

	count--;
*/
	s1.display(count);
	cout << "updated!!" << endl;

	return 0;
}
