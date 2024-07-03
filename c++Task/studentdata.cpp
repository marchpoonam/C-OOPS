//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
//Include member functions to calculate and set salary based on employee performance.
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	private:
		char name[20];
		int id;
		int sal;
	public:
		void setdata(char n[],int i,int s)
		{
			strcpy(name,n);
			id=i;
			sal=s;
		}
		void showdata()
		{
			cout<<"\n"<<name<<"\t"<<id<<"\t"<<sal;
		}
		int getsal()
		{
			return sal;
		}
};
int main()
{
	char name1[20];
	int id1,sal1,i,j;
	Employee e[3],temp;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter name,id & salary of Employee"<<i+1<<":";
		cin>>name1>>id1>>sal1;
		e[i].setdata(name1,id1,sal1);
	}
	cout<<"**Student Data**";
	for(i=0;i<3;i++)
		{
			e[i].showdata();
		}
	for(i=0;i<3;i++)
		{
			for(j=i+1;j<3;j++)
			{
				if(e[i].getsal()<e[j].getsal())
				{
					temp=e[i];
					e[i]=e[j];
					e[j]=temp;
				}
			}
	   } 
	   cout<<"\nSalaray Based on Performance:";
		for(i=0;i<3;i++)
		{
			e[i].showdata();
		}
	return 0;
}
