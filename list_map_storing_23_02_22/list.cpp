#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lst;	//create empty list

	int i;
	for(i=0; i<10; i++)
	{
		lst.push_back(i);
	}

	cout << "size of list: " << lst.size() << endl;

	cout << "contents: " << endl;
	list<int> :: iterator p = lst.begin();

	for(i=0; i<10; i++)
	{
		cout << "values in list: " << i << "=" << *p << endl;
		p++;
	}

	cout << "\n\n";

	p = lst.begin();

	while(p!=lst.end())
	{
		*p = *p * 100;
		*p++;
	}

	cout << "modified contents" << endl;
	p = lst.begin();

	while(p != lst.end())
	{
		cout << "values: " << *p << endl;	
		*p++;
	}

	cout << "\nin reverse" << endl;
	p = lst.end();
//	cout << "position of list at begin: " << lst.end() << endl;
//	printf("Value of p=lst.end(): %d\n",p);

	while(p != lst.begin())
	{
		p--;
		cout << "values: " << *p << endl;	
	//	*p--;
	}


	return 0;
}
