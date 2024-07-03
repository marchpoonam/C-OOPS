#include<iostream>
#include<string.h>
using namespace std;
class square
{
public:
square(int x)	
{
	cout<<"Square is:"<<x*x;
}
};
int main()
{
	square s(5);
	return 0;
}
