#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fin , fout ;
	int count=0;

	fin.open("file.txt");
	fout.open("copyFile.txt", ios::app);
	char ch;

	if(!fin)
		cout << "can't open file" << endl;
	else
	{
		while(!fin.eof())
		{
			count++;
			fin.get(ch);
			fout << ch;
		}

		cout << "copying from file.txt to copyFile.txt done" << endl;
		cout << "Number of words in file.txt are: "<< count << endl;
	}

	fin.close();
	fout.close();

	return 0;
}
