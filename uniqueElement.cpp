#include<iostream>

using namespace std;

int uniqueElement(int arr[], int n)
{
    int ans;
    for(int i = 0; i<n; i++)
    {
         ans = ans^arr[i];
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

    cout<<"Unique element in Array is : "<<uniqueElement(Array,Size);
    return 0;
}
