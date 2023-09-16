#include<iostream>
using namespace std;
void sum(int a,int b,int *s);
int main()
{
	int a,b,s;
	
	cout<<"Enter the two numbers ::";
	cin>>a>>b;
	
	sum(a,b,&s);
	cout<<"Sum is ::"<<s;
	
	return 0;
}
void sum(int a,int b,int *s)
{
	*s=a+b;
}
