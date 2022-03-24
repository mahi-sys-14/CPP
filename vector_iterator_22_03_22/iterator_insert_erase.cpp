#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<char> v(10); // create a vector of length 10
	vector<char> :: iterator p; // create an iterator

	int i;

	// assign elements in vector a value
	p = v.begin();
	i=0;

	while(p != v.end())
	{
		*p = i + 'a';
		*p++;
		i++;
	}

	cout << "original contents" << endl;
	p = v.begin();

	while(p != v.end())
	{
		cout << "value: " << *p << endl;
		*p++;
	}

//	cout << "Current position of pointer: "<< *p << endl;

	v.insert(p, 4 ,'z');

	// change contents of vector
	p = v.begin();

	while(p != v.end())
	{
		*p = toupper(*p);
		*p++;
	}

	cout << "Modified vector content" << endl;
	p = v.begin();

	while(p != v.end())
	{
		cout << "value: " << *p << endl;
		*p++;
	}

	cout << "\nafter erasing" << endl;
	cout << "Current position of pointer: "<< *p << endl;

	v.erase(p-8, p-4);

	p = v.begin();

	while(p != v.end())
	{
		cout << "value: " << *p << endl;
		*p++;
	}

	return 0;
}
