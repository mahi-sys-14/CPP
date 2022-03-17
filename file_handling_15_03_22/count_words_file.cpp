#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fin;
	fin.open("file.txt");

	int count=0;

//	char word[30];
	string str;

	if(!fin)
		cout << "can't open file" << endl;
	else
	{
		// Number of words in file
		while(fin >> str)
		{
//			fin >> str;
			count++;
		}
	
		//count number of lines in file
	/*	while(getline(fin, str))
			count++;
*/
		cout << "Count of lines: " << count << endl;
	}

	return 0;
}
