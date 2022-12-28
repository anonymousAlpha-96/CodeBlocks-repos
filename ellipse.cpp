//ellipsis program to find out the sum of list of array values
#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int n, ...)
{
	va_list list;
	va_start(list, n);

	int x;
	int s = 0;

	for(int i=0;i<n;i++)
	{
		x = va_arg(list, int);
		//cout<<x<<endl;
		s+=x;
	}
	return s;
}

int main()
{
	cout<<"sum is : "<<sum(6, 2,8,18,23,25,26)<<endl;
	return 0;
}
