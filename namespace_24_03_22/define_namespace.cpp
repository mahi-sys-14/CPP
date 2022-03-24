#include<iostream>
using namespace std;

namespace CounterNameSpace
{
	int upperbound;
	int lowerbound;

	class counter
	{
		int count;

		public:

		counter(int n)
		{
			if(n <= upperbound)
				count = n;
			else
				count = upperbound;
		}

		void reset(int n)
		{
			if(n <= upperbound)
				count = n;
		} //end reset

		int run()
		{
			if(count > lowerbound)
				return count--;
			else
				return lowerbound;
		} // end run
	}; //end class
} //end of namespace

int main()
{
	CounterNameSpace::upperbound = 100;
	CounterNameSpace::lowerbound = 0;
	CounterNameSpace::counter obj1(10);

	int i;

	cout << "Object 1 of counter class, count = 10 & lowerbound=0" << endl;
	do
	{
		i = obj1.run();		// once object is created we don;t need ::
		cout << i << " ";
	}while(i > CounterNameSpace::lowerbound);

	cout << endl << endl;

	cout << "Object 2 of counter class, count = 20 & lowerbound=0" << endl;
	CounterNameSpace::counter obj2(20);

	do
	{
		i = obj2.run();		// once object is created we don't need ::
		cout << i << " ";
	}while(i > CounterNameSpace::lowerbound);

	cout << endl << endl;

	cout << "After reseting the count=100 & lowerbound=90" << endl;
	obj2.reset(100);

	CounterNameSpace::lowerbound = 90;

	do
	{
		i = obj2.run();
		cout << i << " " ;
	}while(i > CounterNameSpace::lowerbound);

	cout << endl;

	return 0;
}
