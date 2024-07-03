//Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables.
#include<iostream>
#include<string.h>
//using namespace std;
class Car
{
	private:
	        char company[20];
	        char model[20];
	        int year;
	public:
		void setdata(char c[],char m[],int y)
		{
			strcpy(company,c);
			strcpy(model,m);
			year=y;
		}
		void getdata()
		{
		
			std::cout<<"\n"<<company<<"\t"<<model<<"\t"<<year;
		}
};
int main()
{
	char company1[20],model1[20];
	int year1,i;
	Car c[3];
	for(i=0;i<3;i++)
	{
	std::cout<<"\n Enter Company,model & year of car"<<i+1<<":";
	std::cin>>company1>>model1>>year1;
	c[i].setdata(company1,model1,year1);
	}
	std::cout<<"***Car Information***\n";
	std::cout<<"Company"<<"\t"<<"Model"<<"\t"<<"Year";
	for(i=0;i<3;i++)
	{
	c[i].getdata();
}
	return 0;
}

