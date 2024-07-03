#include<iostream>
#include<string.h>
using namespace std;
class OccuranceApp
{
	public:
		int z[5],i,len,temp;
		char str[20];
		OccuranceApp(int x[])
		{
		for(i=0;i<5;i++)
		{
			z[i]=x[i];
		}
		len=sizeof(z)/sizeof(z[0]);
		cout<<"\nLength of Given Array="<<len;
		cout<<"\nArray Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
	}
};
int main()
{
	int a[5],i;
	char string[20];
	cout<<"Enter Elements of Array:\n";
	for(i=0;i<5;i++)//Inpt Array Elements from user
		{
		cin>>a[i];
		}
	OccuranceApp o(a);//Pass array elements
	cout<<"\nEnter a String:"
	cin>>string;
	ReverseApp s(string);
	return 0;
}
