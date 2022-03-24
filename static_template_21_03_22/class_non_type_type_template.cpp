#include<iostream>

using namespace std;

template <class T, int N>
class mysequence
{
	T memblock[N];

	public:
	void setMember(int x, T value);

	T getMember(int x);
};

template <class T, int N>
void mysequence<T, N> :: setMember(int x, T value)
{
	memblock[x] = value;
}

template <class T, int N>
T mysequence<T, N> :: getMember(int x)
{
	return memblock[x];
}

int main()
{
	const int a=5;

	mysequence<int, a> myint;
	mysequence<double, a> myfloat;

	myint.setMember(0, 100);
	myfloat.setMember(3, 3.14);

	cout << myint.getMember(0) << endl;
	cout << myfloat.getMember(3) << endl;

	return 0;
}
