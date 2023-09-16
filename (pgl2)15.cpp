#include<iostream>
using namespace std;
inline int (square(int));
int main()
{
	cout<<square(2)<<endl;
}
inline int (square(int x))
{
	return x*x;
}
