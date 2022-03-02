#include<iostream>

using namespace std;

class solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;
        for(int i=0;i<=30;i++)
        {
            if(ans == n)
            {
                cout<<"True"<<endl;
                //return true;
            }
        }
        if(ans<INT_MAX/2)
            ans=ans*2;
        cout<<"False"<<endl;
        //return false;
    }
};
int main()
{
    int x;
    cout<<"Enter the number to find the power : ";
    cin>>x;

    solution sol;
    sol.isPowerOfTwo(x);
}
