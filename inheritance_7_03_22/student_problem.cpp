#include<iostream>
#include<cstring>
#include<cstdio>
#include"stdio.h"
#include<string.h>
#include  <bits/stdc++.h>

using namespace std;

class student
{
	public:
		int roll_no;
		char name[20];

		void getinfo()
		{
			cout << "Enter the roll no: " << endl;
			cin >> roll_no;
			cout << "Enter the name: " << endl;
			char temp=getchar();
			cin.getline(name,sizeof(name));
		}

};

class test
{
	public:
		int marks[5];

		void getmarks()
		{
			cout << "Enter the marks of 5 subjects: " << endl;
			for(int i=0; i<5; i++)
			{
				cin >> marks[i];
				//cout << "marks " << i << ": " << marks[i] << endl; 
			}
		}
};

class result : public student, public test
{
	public:
		int total_marks=0,percent=0;

		void calculate_total()
		{
			for(int i=0; i<5; i++)
			{
				total_marks += marks[i];
			}	
			cout << "Total marks are: " << total_marks << endl;
		}

		void calculate_percentage()
		{
			percent = total_marks/5;
			cout << "Percentage of student is: " << percent << endl;
		}
};

int main()
{
	result r;
	student s;
	test t;

	r.getinfo();
	r.getmarks();

	r.calculate_total();
	r.calculate_percentage();

	return 0;
}
