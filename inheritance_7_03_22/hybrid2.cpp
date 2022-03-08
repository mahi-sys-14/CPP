#include<iostream>

using namespace std;

class A
{
	public:
		int x=10,y=20;

		void disp1()
		{
			cout << "x: " << x << endl << "y: " << y << endl; 
		}

};

class B : public A
{
	public:
		int a=5, b=9;

		void disp2()
		{
			cout << "a: " << a << endl << "b: " << b << endl; 
		}

};

class C : public B
{
	public:
		int c=15, d=19;

		void disp3()
		{
			cout << "c: " << c << endl << "d: " << d << endl; 
		}

};

class D : public B
{
	public:
		int e=25, f=6;

		void disp4()
		{
			cout << "e: " << e << endl << "f: " << f << endl; 
		}

};

class E : public C, public D
{
	public:
		int g=20, h=3;

		void disp5()
		{
			cout << "g: " << g << endl << "h: " << h << endl; 
		}

};

class F : public D
{
	public:
		int p=55, q=26;

		void disp6()
		{
			cout << "p: " << p << endl << "q: " << q << endl; 
		}

};

class G : public E
{
	public:
		int r=85, s=23;

		void disp7()
		{
			cout << "r: " << r << endl << "s: " << s << endl; 
		}
};

class H : public E
{
	public:
		int t=59, u=66;

		void disp8()
		{
			cout << "t: " << t << endl << "u: " << u << endl; 
		}
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	G g;
	H h;

	cout << "Class A" << endl;
	a.disp1();

	cout << "Class B" << endl;
	b.disp2();
	b.disp1();

	cout << "Class C" << endl;
	c.disp3();
	c.disp2();

	cout << "Class D" << endl;
	d.disp4();
	d.disp2();
//	d.disp3();

	cout << "Class E" << endl;
	e.disp5();
	e.disp4();
	e.disp3();

	cout << "Class F" << endl;
	f.disp6();
	f.disp4();

	cout << "Class G" << endl;
	g.disp7();
	g.disp5();

	cout << "Class H" << endl;
	h.disp8();
	g.disp5();

	return 0;
}
