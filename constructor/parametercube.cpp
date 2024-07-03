#include<iostream>
#include<string.h>
using namespace std;
class cube
{
	private:
		int no;
public:
      cube(int x)	
    {
	  no=x;
    }
    void showcube()
    {
     cout<<"cube is:"<<no*no*no;	
	}
};
int main()
{
	int no;
	cout<<"enter the number:\n";
	cin>>no;
	cube c(no);
	c.showcube();
		return 0;
}
/*
#include<iostream>
#include<string.h>
using namespace std;
class cube
{
public:
cube(int x)	
{
	cout<<"Cube is:"<<x*x*x;
}
};
int main()
{
	cube c(5);
	return 0;
}
*/
