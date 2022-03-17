#include<iostream>
#include<exception>

using namespace std;

class divide
{
	private:
	int *x;
	int *y;

	public:
	divide()
	{
		x=new int();
		y=new int();
		cout<<"Enter Two NUmbers:";
		cin>> *x>>*y;
		try
		{
			if(*y==0)
			{
				throw *x;
			}
		}
		catch(int)
		{
			delete x; delete y;
			cout<<"second number can't be zero!"<<endl;
			throw;
		}
	}
		
	~divide()
	{
		try
		{
			delete x;delete y;
		}
		catch(...)
		{
			cout<<"Error while deallocating memeory"<<endl;
		}
	}
	
	float division()
	{
		return(float)*x/ *y;
	}
};

int main()
{
	try
	{
		divide d;
		float res=d.division();
		cout << "Result of division is: " << res << endl;
	}
	catch(...)
	{
		cout << "Unknown Exception" << endl;
	}

	return 0;
}

