#include<iostream>
#include<string.h>
using namespace std;
class table
{
	private:
		int t;
public:
table(int x)	
{
	t=x;
}
void showtable()
{
	cout<<"table of" <<t <<"is:\n";
	for(int i=1;i<=10;i++)
	{
		cout<<t*i<<"\n";
	}
}
};
int main()
{
	int no;
	cout<<"Enter the number:";
	cin>>no;
	table t1(no);
	t1.showtable();
	return 0;
}
