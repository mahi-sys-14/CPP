#include<iostream>
using namespace std;

int main()
{
	float *ptr=new float;
	*ptr=55;

	cout<<"Value= "<< *ptr<< endl;
	cout << "address= "<< ptr << endl;
	cout<< "sizeof *ptr= "<<sizeof(*ptr)<<endl;
	cout<< "sizeof ptr= "<<sizeof(ptr) << endl;
	cout<< "sizeof &ptr= "<< &ptr << endl;

	return 0;
}

