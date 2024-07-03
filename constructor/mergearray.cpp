#include<iostream>
#include<string.h>
using namespace std;
class ArrayOperation
{
	public:
		int m[5],n[5],i,j,len1,len2,temp;
		ArrayOperation(int x[],int y[])
		{
		for(i=0;i<5;i++)
		{
			m[i]=x[i];
			n[i]=y[i];
		}
		len1=sizeof(m)/sizeof(m[0]);
		cout<<"\nLength of Array1="<<len1;
		len2=sizeof(n)/sizeof(n[0]);
		cout<<"\nLength of Array2="<<len2;
		cout<<"\nArray1 Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<m[i];
		}
		cout<<"\nArray2 Elements are:";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<n[i];
		}
		int merge[len1+len2];
		int index=0;
		for(i=0;i<len1;i++)
		{
			merge[index]=m[i];
			index++;
		}
		for(i=0;i<len2;i++)
		{
			merge[index]=n[i];
			index++;
		}
		cout<<"\nAfter Merge Array Elements are:";
		for(i=0;i<len1+len2;i++)
		{
			cout<<"\t"<<merge[i];
		}
	}
};
int main()
{
	int a[5],b[5],i;
	cout<<"Enter Elements of Array1:\n";
	for(i=0;i<5;i++)//Inpt Array1 Elements from user
		{
		cin>>a[i];
		}
		cout<<"Enter Elements of Array2:\n";
	for(i=0;i<5;i++)//Inpt Array2 Elements from user
		{
		cin>>b[i];
		}
	ArrayOperation ap(a,b);//Pass array elements
	return 0;
}
