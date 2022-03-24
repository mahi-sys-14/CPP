#include<iostream>
#include<vector>

using namespace std;

class DailyTemp
{
	int temp;
	public:

	DailyTemp()
	{
		temp =0;
	}

	DailyTemp(int x)
	{
		temp = x;
	}

	DailyTemp &operator = (int x)
	{
		temp = x;
		return *this;
	}

	double gettemp()
	{
		return temp;
	}

};

bool operator<(DailyTemp a, DailyTemp b)
{
	return a.gettemp() < b.gettemp();
}

bool operator==(DailyTemp a, DailyTemp b)
{
	return a.gettemp() == b.gettemp();
}

int main()
{
	vector <DailyTemp> v;

	int i;

	for(i=0; i<7; i++)
		v.push_back(DailyTemp(60 + rand()%30));

	cout << "Farehnite Temperator" <<endl;

	for(i=0; i<v.size(); i++)
		cout << "vector " << v[i].gettemp() << " ";

	cout << endl;	

	// convert from farehnite to centigrade
	for(i=0; i<v.size(); i++)
		v[i] = (v[i].gettemp() - 32) *5/9;

	cout << "Centigrade temperature" << endl;

	for(i=0; i<v.size(); i++)
		cout << "vector " << v[i].gettemp() << " ";

	cout << endl;
	return 0;
}
