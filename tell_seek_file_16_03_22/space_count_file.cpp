#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fout;
	char buf[100];
	int count=0, i=0;
	char c;

	fout.open("count_space.txt", ios::out|ios::in);

	cout<<"Writing to a file"<<endl;
	fout<<"Line one  Line  two"<<endl;
	fout<<"Writing to line two" << endl;

	long pos=fout.tellp();
	cout<<"current position:"<<pos<<endl;

	fout.seekg(0);

	while(!fout.eof())
		{	
			fout.get(c);

			if(c == ' ')
				count++;
			else
				continue;
		}

	cout << "space counts: " << count << endl;

	fout.close();

	return 0;
}
