//lambda expressions
#include<iostream>

using namespace std;

int main()
{
	[]()
	{
		cout<<"Ankit"<<endl;
	}();

	[](string str)
	{
		cout<<str<<endl;
	}("ankit");

	[](int x, int y){cout<<x+y<<endl;}(18,8);

	cout<<([](int a, int b)->int{return a*b;}(2,25))<<endl;

	int c = [](int a, int b)->int{return a*b;}(2,25);
	cout<<c<<endl;

	//using declared variable in lambda function 
	auto ankit = 2696;
	[ankit](){cout<<ankit;}();
	cout<<endl;

	//increase using reference to the variable
	auto aditya = 8790;
	auto ad = [&aditya](){cout<<aditya<<endl;};
	ad();
	aditya += 6;
	ad();
	cout<<endl;

	
return 0;
}
