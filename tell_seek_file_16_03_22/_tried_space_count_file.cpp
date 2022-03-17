#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream fout;
	char buf[100];

	fout.open("count_space.txt", ios::out|ios::in);

	cout<<"Writing to a file"<<endl;
	fout<<"Line one  Line  two"<<endl;
	fout<<"Writing to line two" << endl;

	long pos=fout.tellp();

	cout<<"current position:"<<pos<<endl;

//	fout.close();

//	ifstream input;
	int count=0, i=0;
	char c;

//	input.open("count_space.txt");
/*
	if(!input)
	{
		cout << "Can't open the file" << endl;
	}
	else
	{
		cout << "File opened" << endl;
		while(!input.eof())
		{	
//			cout << str << endl;
			input.get(c);

			if(c == ' ')
				count++;
			else
				continue;

			i++;
		}

		cout << endl;
	}
*/
	fout.seekg(0);
//	cout << "current position" << p << endl;

	while(!fout.eof())
		{	
//			cout << str << endl;
			fout.get(c);

			if(c == ' ')
				count++;
			else
				continue;
		}

	cout << "space counts: " << count << endl;

//	input.close();
	fout.close();

	return 0;
}
