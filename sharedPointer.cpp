/*
*Smart Pointers
	1.unique pointers
	2.shared pointers
	3.weak pointers
*/

#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
	int length, breadth;
public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	int area()
	{
		return length * breadth;
	} 
};


int main()
{

	//Shared pointer
	shared_ptr<Rectangle> ptr(new Rectangle(2,8));
	cout<<ptr->area()<<endl;

	//easily can assign diffrent pointers
	shared_ptr<Rectangle> ptr1;
	ptr1 = ptr;
	cout<<ptr1->area()<<endl;
	cout<<"Counted : "<<ptr.use_count()<<endl;
	

	return 0;
}
