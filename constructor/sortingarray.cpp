#include<iostream>
#include<string.h>
using namespace std;
class ArrayOperation
{
	public:
		int z[5],i,j,len,temp;
		char str[20];
		ArrayOperation(int x[])
		{
		for(i=0;i<5;i++)
		{
			z[i]=x[i];
		}
		len=sizeof(z)/sizeof(z[0]);
		cout<<"\nLength of Given Array="<<len;
		cout<<"\nBefore Sorting Array Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
		//Logic for ascending Order array
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(z[i]>z[j])
				{
					temp=z[i];
					z[i]=z[j];
					z[j]=temp;
				}
			}
		}
		cout<<"\nAscending Order Array Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
		//logic for Descending Order Array
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(z[i]<z[j])
				{
					temp=z[i];
					z[i]=z[j];
					z[j]=temp;
				}
			}
		}
		cout<<"\nDescending Order Array Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<z[i];
		}
		}
};
int main()
{
	int a[5],i;
	cout<<"Enter Elements of Array:\n";
	for(i=0;i<5;i++)//Inpt Array Elements from user
		{
		cin>>a[i];
		}
	ArrayOperation ap(a);//Pass array elements
	return 0;
}
