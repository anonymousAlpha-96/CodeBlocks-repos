//Find the GCD(Greatest of common deviser) of given number

#include<iostream>

using namespace std;

int findGCD(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
        return a;
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}

int main()
{
    int n1, n2;
    int ans;

    cout<<"Enter two numbers to find GCD : ";
    cin>>n1>>n2;

    ans = findGCD(n1, n2);

    cout<<"GCD of Entered numbers are : "<<ans<<endl;
}
