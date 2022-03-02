//program searches the element top most right and left in the array.
//codehelp- by bubber lecture 13 on Binary search on interview question

#include<iostream>

using namespace std;

int binarySearchFirstOcc(int a[], int n, int k)
{
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
       if(a[mid]== k)
       {
           ans = mid;
           e = mid - 1;
       }
       else if(k>=a[mid])
       {
           s=mid+1;
       }
       else if(k<a[mid])
       {
           e=mid-1;
       }
       mid = s+(e-s)/2;
    }
    return ans;
}

int binarySearchLastOcc(int a[],int n, int k)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans = mid;
            s=mid+1;
        }
        else if(k>a[mid])
        {
            s=mid+1;
        }
        else if(k<a[mid])
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

// pair function returns two values first and second from the array
pair<int, int> firstAndSecondOcc(int a[], int n,int k)
{
    //declaration of pair function/method
    pair<int, int>p;

    //p.first and p.second are the methods of pair functionality
    p.first = binarySearchFirstOcc(a,n,k);
    p.second = binarySearchLastOcc(a,n,k);
    cout<<"\nIndex returned in pair : "<<p.first<<" "<<p.second;
    cout<<endl;
    //return p;
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
    cout<<"Enter the element to be searched : ";
    cin>>key;

    int firstOcc = binarySearchFirstOcc(arr,Size, key);
    cout<<"\nSearched Element in the array firstly found at : "<<firstOcc;
    cout<<endl;
    int lastOcc = binarySearchLastOcc(arr,Size, key);
    cout<<"\nSearched Element in the array lastly found at : "<<lastOcc;
    cout<<endl;

    firstAndSecondOcc(arr,Size,key);

}
