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

	//unique pointer
	unique_ptr<Rectangle> ptr(new Rectangle(2,8));
	cout<<ptr->area()<<endl;

	//using move function pointer can be pass to diffrent pointer 
	unique_ptr<Rectangle> ptr1;
	ptr1 = move(ptr);
	cout<<ptr1->area()<<endl;

	//once it moved to diffrent pointer, we can't call the same previous pointer again it will through segmentation fault error
	//cout<<ptr->area()<<endl;
	

	return 0;
}
