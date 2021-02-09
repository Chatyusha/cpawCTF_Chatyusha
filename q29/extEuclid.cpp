#include <iostream>

using namespace std;

int extEuclid(int a,int b,int &x,int &y)
{
	if (b == 0) {
		x = 1;
		y = 0;
		return 0;
	}
	else {
		extEuclid(b,a%b,x,y);
		swap(x,y);
		x = x;
		y = -(a/b) * x + y;
		return 0;
	}
}
int main(int argc, char* argv[])
{
	int x,y;
	extEuclid(111,30,x,y);
	printf("(%d,%d)\n",x,y);
	return 0;
}
