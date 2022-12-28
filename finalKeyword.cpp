//program for final keyword
#include<iostream>

using namespace std;

class Parent
{

};

class child:Parent
{

};

//if Base class is final then Derived class can not inherit the Base class
class Base //final
{

};

class Derived: Base
{

};

class Railways
{
public:
	void start()
	{
		cout<<"Train Started"<<endl;
	}
};

class vandeBharath:Railways
{
public:
	void start()
	{
		cout<<"vandeBharath Statrted"<<endl;
	}
};

/*
In this class you will get an error like:
error: ‘void Roadways::start()’ marked ‘final’, but is not virtual void start() final
*/
/*
class Roadways
{
public:
	void start()	final
	{
		cout<<"vehicle Started"<<endl;
	}
};

class Car:Roadways
{
public:
	void start()
	{
		cout<<"Car Statrted"<<endl;
	}
};*/

/*
becuase of that error virtual keyword added to the function defination: after that we will get this error

error: virtual function ‘virtual void Bus::start()’void start()
error: overriding final function ‘virtual void Roadways::start()’ virtual void start() final
*/
/*class Roadways
{
public:
	virtual void start()	final
	{
		cout<<"vehicle Started"<<endl;
	}
};

class Bus:Roadways
{
public:
	void start()
	{
		cout<<"Bus Statrted"<<endl;
	}
};*/

/*
after adding virtual
*/

/*
Becuase of the error child class can not be inherited from the parent class.
*/
class Roadways
{
public:
	virtual void start()	final
	{
		cout<<"vehicle Started"<<endl;
	}
};

class Bike:Roadways
{
public:
	//void start()
	//{
		//cout<<"Bike Statrted"<<endl;
	//}
};

int main()
{
	cout<<"Executed "<<endl;
	vandeBharath vb;
	vb.start();
	Roadways c;
	c.start();

	return 0;
}
