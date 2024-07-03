#include<iostream>
using namespace std;
class Area
{
	public:
		Area(int radius)
		{
			cout<<"\nArea of Circle:"<<1.14f*radius*radius;
		}
		Area(int len,int wid)
		{
			cout<<"\nArea of Rectangle:"<<len*wid;
		}
		Area(float base,float height)
		{
			cout<<"\nArea of Triangle:"<<0.5*base*height;
		}
};
int main()
{
	Area a1(5);
	Area a2(5,3);
	Area a3(20.5f,6.5f);
	return 0;
}

