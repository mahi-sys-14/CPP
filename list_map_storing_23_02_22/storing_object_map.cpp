#include<iostream>
#include<map>
#include<cstring>

using namespace std;

class name
{
	//first class
	
	char str[40];

	public:

	name()
	{
		strcpy(str, "");
	}

	name(char *s)
	{
		strcpy(str, s);
	}

	char *get()
	{
		return str;
	}
};

// Must define less than relative to name object
bool operator<(name a, name b)
{
	return strcmp(a.get(), b.get()) < 0;	//true/false
}

class phonenum
{
	// second class
	
	char str[80];

	public:

	phonenum()
	{
		strcpy(str, "");
	}

	phonenum(char *num)
	{
		strcpy(str, num);
	}

	char *get()
	{
		return str;
	}
};

int main()
{
	map<name, phonenum> directory;

	directory.insert(pair<name, phonenum>(name("Emp1"), phonenum("555-111")));
	directory.insert(pair<name, phonenum>(name("Emp2"), phonenum("555-222")));
	directory.insert(pair<name, phonenum>(name("Emp3"), phonenum("555-333")));
	directory.insert(pair<name, phonenum>(name("Emp4"), phonenum("555-444")));

	char n[80];

	cout << "Enter the name" << endl;
	cin >> n;

	map<name, phonenum> :: iterator p;

	p = directory.find(name(n));

	if(p != directory.end())
		cout << "phone num: " << p->second.get() << endl;
	else
		cout << "name is not in dictionary" << endl;

	return 0;
}
