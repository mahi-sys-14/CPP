#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("tell.txt");

	outfile << "This is my file for tellg & tellp";
	long pos = outfile.tellp();

	cout << "current pos after writing once: " << pos << endl;

	outfile.seekp(pos+6);
	outfile << "Writing in this file again";
	outfile.close();

	cout << "done!" << endl;

	return 0;
}
