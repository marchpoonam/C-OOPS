#include<iostream>
using namespace std;
class fibo
{
 private:
 int f1,f2,fib,i;
 public:
 fibo()	 
 {
  f1=0;
  f2=1;
 }
 void showfib()
 {
 	cout<<"Fibonnacci series:";
	cout<<f1<<"\t"<<f2<<"\t";
 	for(i=0;i<5;i++)
 	{
 		fib=f1+f2;
 		f1=f2;
 		f2=fib;
 		cout<<fib<<"\t";
	 }
	 }	
 };
 int main()
 {
 	fibo f;
 	f.showfib();
 	return 0;
 }
