//Selection

#include<iostream>

using namespace std;


int selectionSort(int a[], int n)
{
    for(int i = 0;i<n;i++)
    {
        int minIndex = i;

        for(int j = i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[minIndex],a[i]);
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

    selectionSort(arr, Size);
    printArray(arr, Size);
}
