#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
	int id;
	char name[20];
	char dept[20];
	int fees;
	public:
		student(int i,char n[],char d[],int f)
		{
			id=i;
			strcpy(name,n);
			strcpy(dept,d);
			fees=f;
		}
		student(student &s)
		{
		    this->id=s.id;
			strcpy(this->name,s.name);
			strcpy(this->dept,s.dept);
			this->fees=s.fees;	
		}
		void show()
		{
		
		cout<<"ID\tNAME\tDEPARTMENT\tFEES\n";
		cout<<id<<"\t"<<name<<"\t"<<dept<<"\t"<<fees;
		}
		
};
int main()
{
	student s1(101,"Akash","Computer",5000);//called Argument Constructor
	student s2(s1);//called Copy Constructor
	cout<<"\n ***Student1 data****\n";
	s1.show();
	cout<<"\n ***Student2 data****\n";
	s2.show();
	
 return 0;	
}
