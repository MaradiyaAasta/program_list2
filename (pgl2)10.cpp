//write a c++ program to use of call by references.//
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int a=10,b=20;
	
	cout<<"Before the Swapping number ::"<<a<<endl;
	cout<<"Before the Swapping number ::"<<b<<endl<<endl;
	
	swap(a,b);
	
	cout<<"After the swapping number ::"<<a<<endl;
	cout<<"After the swapping number ::"<<b<<endl;
	
	return 0;
}
void swap (int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
