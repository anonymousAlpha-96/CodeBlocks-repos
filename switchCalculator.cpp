#include<iostream>

using namespace std;

int main()
{

    int n1, n2;
    int ans;
    char op;

    cout<<"\n Enter the value for first variable :";
    cin>>n1;

    cout<<"\n Enter the value for second variable : ";
    cin>>n2;

    cout<<"\n Enter the operation ";
    cin>>op;

    switch(op)
    {
    case '+':
        ans = n1+n2;
        cout<<"Answer is "<<ans;
        break;
    case '-':
        ans = n1-n2;
        cout<<"Answer is "<<ans;
    case '*':
        ans = n1*n2;
        cout<<"Answer is "<<ans;
        break;
    case '/':
        ans = n1/n2;
        cout<<"Answer is "<<ans;
        break;
    default:
        cout<<"Enter valid operator";
    }
}
