//Program for vitrtual Destructor 
//Always Construcor are called top down approach and destructors are called bottomsUp approach
#include<iostream>

using namespace std;
class Base
{
public:
	Base()
	{
		cout<<"Constructor of Base"<<endl;
	}
	//virtual destructor are useful when base class pointer is created for derived class object
	virtual ~Base()
	{
		cout<<"Destructor of Base"<<endl;
	}
};

class Derived:public Base
{
public:
	Derived()
	{
		cout<<"Constructor of Derived"<<endl;
	}
	~Derived()
	{
		cout<<"Destructor of Derived"<<endl;
	}
};

int main()
{
	//Derived d;
	Base *b = new Derived();
	delete b;
	return 0;
}
