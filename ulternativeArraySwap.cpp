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


void ulternativeArraySwap(int arr[], int n)
{
    for(int i = 0; i < n; i + 2)
    {
        if(i+1 < n)
        {
         //swap(arr[i], arr[i+1]);
         int temp[100];
         temp[i] = arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp[i];
        }
    }
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

    ulternativeArraySwap(Array, Size);
    printArray(Array, Size);

    return 0;
}
