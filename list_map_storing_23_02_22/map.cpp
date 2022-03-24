#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> m;
	int i;

	//put pairs into map
	for(i=0; i<26; i++)
	{
		m.insert(pair<char, int>('A'+i, 65+i));
	}

	char ch;
	cout << "Enter key (an upper case letter)" << endl;
	cin >> ch;

	map<char, int> :: iterator p;
	p = m.find(ch);

	if(p != m.end())
	{
		cout << "it's key is: "<< p->first << endl;
		cout << "Its ascii value is: " << p->second << endl;
	}
	else
	{
		cout << "key is not mapped" << endl;
	}


	return 0;
}
