/*An element in a sorted array can be found in O(log n) time via binary search.
But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand.
So for instance, 1 2 3 4 5 might become 3 4 5 1 2.
 Devise a way to find an element in the rotated array in O(log n) time*/

#include<bits/stdc++.h>

using namespace std;

int pivotElement(int a[], int n)
{
    int s=0, e = n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int main()
{
    int Size;
    int arr[10];

    cout<<"Enter the size : ";
    cin>>Size;

    cout<<"Enter the Elements of the Array : ";
    for(int i = 0;i<Size;i++)
    {
        cin>>arr[i];
    }

    int pivot = pivotElement(arr,Size);

    cout<<"\nPivot element in an array at index of : "<<pivot;
    cout<<endl;

    return 0;
}
