#include<iostream>

using namespace std;

int main()
{
    int nameHiding = 18;
    {
        cout<<"Global Name Hiding value inside : "<<nameHiding<<endl;

        int nameHiding = 25;
        cout<<"Name Hiding after inner initialization : "<<nameHiding<<endl;
    }
    cout<<"name hiding value in outer side : "<<nameHiding<<endl;
    return 0;
}
