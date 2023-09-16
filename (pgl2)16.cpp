#include<iostream>
using namespace std;
float area(int );
float area(int,int);
float area(float);
int main()
{
	int l,b,s;
	float r;
	
	cout<<"Enter the side of square ::";
	cin>>s;
	
	cout<<"Enter the length & breadth of rectangle ::";
	cin>>l>>b;
	
	cout<<"Enter the radius of circle ::";
	cin>>r;
	
	cout<<"Area of the square is ::"<<area(s)<<endl;
	cout<<"Area of the rectangle is ::"<<area(l,b)<<endl;
	cout<<"Area of the circle is ::"<<area(r)<<endl;
}
float area(int s)
{
	return s*s;
}
float area(int l,int b)
{
	return l*b;
}
float area(float r)
{
	return 3.14*r*r;
}

