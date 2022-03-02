//code needs to be updated
#include<iostream>

using namespace std;

int duplicateArray(int Arr[], int n)
{
    int ans=0;
    for(int i= 0;i<n; i++)
    {
        ans = ans^Arr[i];
    }
    for(int i = 1;i<n;i++)
    {
        ans= ans^i;
    }
    return ans;
}

int main()
{
    int Size;
    int Array[100];

    cout<<"Enter the Size of the array : ";
    cin>>Size;
    cout<<"Enter the Elements : ";
    for(int i=0;i<Size;i++)
    {
        cin>>Array[i];
    }

    cout<<"Duplicate element in array is : "<<duplicateArray(Array, Size);


}
