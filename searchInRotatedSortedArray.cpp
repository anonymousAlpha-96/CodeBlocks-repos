
#include<iostream>

using namespace std;

void printArray(int a[], int n)
{
    cout<<"Array Elements are : ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int binarySearch(int a[], int start, int End, int k)
{
    int s=start;
    int e=End;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            return mid;
        }
        else if(k>a[mid])
        {
            s=mid+1;

        }
        else if(k<a[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int pivotElement(int a[], int n)
{
    int s=0, e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int findPosition(int a[], int n, int k)
{
    int pivot = pivotElement(a, n);
    if(k >= a[pivot] && k<=a[n-1])
    {
        return binarySearch(a,pivot,n-1,k);
    }
    else
    {
        return binarySearch(a,0,pivot - 1, k);
    }
}



int main()
{
    int Size;
    int arr[10];
    int key;

    cout<<"Enter the size : ";
    cin>>Size;

    cout<<"Enter the Elements of the Array : ";
    for(int i = 0;i<Size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the Key to find : ";
    cin>>key;



    findPosition(arr,Size,key);
    //printArray(arr,Size);
}
