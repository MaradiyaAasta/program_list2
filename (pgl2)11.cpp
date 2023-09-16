#include<iostream>
using namespace std;
int x=5;
int &test();
int main()
{
	test()=5;
	cout<<x;
	return 0;
}
int &test()
{
	return x;
}
