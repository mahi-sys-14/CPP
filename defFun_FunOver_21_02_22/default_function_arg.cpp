#include<iostream>
using namespace std;
/*
class cubevolume {
	public:
		int l, w, h;

		int cubevolume(int l=3, int w=4, int h=7)
		{
			return l*w*h;
		}


};
*/
int cubevolume(int l=5, int w=6, int h=7)
{
	return l*w*h;
}

int main()
{
	cout << "volume 1 " << cubevolume() << endl;
	cout << "volume 2 "<<cubevolume(9) << endl;
	cout << "volume 3 "<<cubevolume(15, 12) << endl;
	cout << "volume " << cubevolume(3, 4,7) << endl;

	return 0;
}
