#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream myfile;
	myfile.open("file.txt", ios::in);

	if(!myfile)
		cout << "Can't open the file" << endl;
	else
		cout << "File opened" << endl;


	return 0;
}
