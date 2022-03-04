//insertion sort

#include<iostream>

using namespace std;

void insertionSort(int n, int a[])
{
    for(int i = 1;i<n;i++)
    {
        int temp = a[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else
            {
                   break;
            }
        }
        a[j+1]=temp;
    }
}

int printArray(int a[], int n)
{
    cout<<"Sorted Array Elements are : ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int Size;
    int arr[10];

    cout<<"Enter the Size of an Array : ";
    cin>>Size;

    cout<<"Enter the Array Elements : ";
    for(int i = 0; i<Size; i++)
    {
        cin>>arr[i];
    }

    insertionSort(Size,arr);
    printArray(arr,Size);
}
