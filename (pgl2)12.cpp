#include<iostream>
using namespace std;
float area(float r,float pi=3.14);
int main()
{
	float r,ans;
	
	cout<<"Enter the radius for find of the circle ::";
	cin>>r;
	
	ans=area(r);
	
	cout<<"Area of the circle is ::"<<ans;
	
	return 0;
}
float area(float r,float pi)
{
	return pi*r*r;
}
