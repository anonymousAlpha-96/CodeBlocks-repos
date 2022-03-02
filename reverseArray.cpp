
#include<iostream>

using namespace std;

void printArray(int arr[],int n)
{
    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int End = n-1;

    while(start<=End)
    {
        swap(arr[start], arr[End]);
        start++;
        End--;
    }
}

int main()
{
    int Size;
    int Array[100];
    int Key;

    cout<<"Enter the Size of the array : ";
    cin>>Size;
    cout<<"Enter the Elements : ";
    for(int i=0;i<Size;i++)
    {
        cin>>Array[i];
    }

    reverseArray(Array, Size);
    printArray(Array,Size);


}
