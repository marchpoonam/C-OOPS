#include<iostream>
#include<string.h>
using namespace std;
class ReverseApp
{
	public:
		int z[5],i,len,temp;
		char str[20];
		ReverseApp(int x[])
		{
		for(i=0;i<5;i++)
		{
			z[i]=x[i];
		}
		len=sizeof(z)/sizeof(z[0]);
		cout<<"\nLength of Given Array="<<len;
		cout<<"\nBefore Reverse Array Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
		for(i=0;i<5;i++)//logic of reverse array elements
		{
			if(i<len)
			{
				temp=z[i];
				z[i]=z[len-1];
				z[len-1]=temp;
				len--;
			}
		}
		cout<<"\nAfter Reverse Array Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
		}
		
		ReverseApp(char s[])
		{
		strcpy(str,s);	
		strrev(str);
		cout<<"After Reverse String is:"<<str;
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
	ReverseApp r(a);//Pass array elements
	cout<<"\nEnter a String:";
	cin>>string;
	ReverseApp s(string);
	return 0;
}
