/* Mahima Vaghela */

#include<iostream>
#include<cstring>
#include<vector>

using namespace std;


int length_unique_substring(string aaa, int x, int y)
{
		

}

int main()
{
	vector<char> v;

	string s;

	cin >> s;
	int i=0, j=0, ssl=0, value;

	cout << "string: " << s << endl;

	vector<char> :: iterator p = v.begin();

	for(i=0; i<s.length(); i++)
	{
		for(j=i; j<s.length; i++)
		{
			ssl += length_unique_substring(s, i, j);
		}
	}

	return 0;
}

