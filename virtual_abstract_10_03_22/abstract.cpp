#include<iostream>
using namespace std;

class convert
{
	protected:
		double var1, var2;
	public:
		convert(double i)
		{
			var1 = i;
		}

		double getconv()
		{
			return var2;
		}

		double getinit()
		{
			return var1;
		}

		virtual void compute() = 0;
};

//litlre to gallonns

class l_g : public convert
{
	public:
		l_g(double i) : convert(i) { }

		void compute()
		{
			var2 = var1/3.7854;
		}
};

class f_c : public convert
{
	public:
		f_c(double i) : convert(i) { }

		void compute()
		{
			var2 = (var1-32)/1.8;
		}
};

int main()
{
	convert *p;
	l_g lg(4);
	f_c fc(70);

	p=&lg;
	cout <<"litres is: "<< p->getinit() << endl; 
	p->compute();
	cout <<"gallons: " << p->getconv() << endl;
	
	p=&fc;
	cout <<"Farehnite is: " << p->getinit() << endl;
	p->compute();
	cout <<"Celcius: " << p->getconv() << endl;


	return 0;
}
