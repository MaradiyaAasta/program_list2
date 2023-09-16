#include<iostream>
using namespace std;
inline int (cube(int));
int main()
{
	cout<<cube(2)<<endl;
}
inline int (cube(int x))
{
	return x*x*x;
}
