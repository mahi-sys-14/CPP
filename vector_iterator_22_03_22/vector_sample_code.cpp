#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<char> v(10);

	int i;

	// original vector size
	cout<< "vector size: " << v.size() << endl;

	// assign values to the vector
	for(i=0; i<10; i++)
		v[i] = i + 'a';

	cout << "display contents of vector" << endl;
	for(i=0; i<v.size(); i++)
		cout << "value of vector " << i << "=" << v[i] << endl; 

	cout << "\nexpnading vector "<< endl;

	/* put more values onto the end of the vector, it will grow as needed */
	for(i=0; i<10; i++)
		v.push_back(i+10+'a');

	// display current size of v
	cout << "Size now: " << v.size() << endl;

	//display(contents of vector
	cout << "current contents" << endl;

	for(i=0; i<v.size(); i++)
		cout << "value of vector " << i << "=" << v[i] << endl; 

	//change contents
	for(i=0; i<v.size(); i++)
		v[i] = toupper(v[i]);

	cout << "\nmodified contents" << endl;

	for(i=0; i<v.size() ; i++)
		cout << "value of vector " << i << "=" << v[i] << endl; 

	cout << endl;

	return 0;
}
