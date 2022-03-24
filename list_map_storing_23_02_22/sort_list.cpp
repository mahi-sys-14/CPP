#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lst1, lst2;

	int i;

	for(i=0; i<10; i+=2)	lst1.push_back(rand()%20);
	for(i=1; i<11; i+=2)	lst2.push_back(rand()%20);

	cout << "Contents of list1:\n";

	list<int> :: iterator p = lst1.begin();

	while(p != lst1.end())
	{
		cout << *p << endl;
		p++;
	}

	cout << "Contents of list2:\n";

	p = lst2.begin();

	while(p != lst2.end())
	{
		cout << *p << endl;
		p++;
	}

	cout << "sorted list1" << endl;
	// sort the list
	lst1.sort();
	p = lst1.begin();

	while(p != lst1.end())
	{
		cout << *p << endl;
		p++;
	}

	cout << "insertion in list2 at begin()" << endl;
	p = lst2.begin();
	lst2.erase(p);

	p = lst2.begin();

	while(p != lst2.end())
	{
		cout << *p << endl;
		p++;
	}

	cout << "sorted list2" << endl;
	// sort the list
	lst2.sort();
	p = lst2.begin();

	while(p != lst2.end())
	{
		cout << *p << endl;
		p++;
	}


	// merging the list1 and list2 into list1: this move the contents of list2 to list1
	lst1.merge(lst2);
	
	if(lst2.empty())
		cout << "list 2 is empty" << endl;

	cout << "contents of list1 after merge: \n";
	p = lst1.begin();

	while(p != lst1.end())
	{
		cout << *p << endl;
		p++;
	}


	return 0;
}
