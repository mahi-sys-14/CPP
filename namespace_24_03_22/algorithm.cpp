#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	char str[] = "I am Mahima Vaghela";
	vector<char> v, v2(20);
	int i;

	for(i=0; str[i]; i++)
	{
		v.push_back(str[i]);
	}
//	cout << endl;

	cout << "Input sequence" << endl;

	for(i=0; i<v.size(); i++)
		cout << v[i] ;

	cout << endl;

	//remove all spaces
//	remove_copy(v.begin(), v.end(), v2.begin(),' ');
	//(itr first, itr last, itr target, char_to_remove)

	// replace all sapces ' ' with ':'
	replace_copy(v.begin(), v.end(), v2.begin(),' ', ':');

	cout << "Result after removing spaces" << endl;

	for(i=0; i<v2.size(); i++)
	{
		cout << v2[i];
	}

	cout << endl;

	return 0;
}
