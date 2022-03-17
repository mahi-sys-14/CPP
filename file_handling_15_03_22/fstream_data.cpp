#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream input;
	string str;

	input.open("file.txt");

	if(!input)
	{	
		cout << "Can't open the file" << endl;
	}
	else
	{	
		cout << "File opened" << endl;
		while(input >> str)
			cout << str << " ";

		cout << endl;
	}


	return 0;
}
