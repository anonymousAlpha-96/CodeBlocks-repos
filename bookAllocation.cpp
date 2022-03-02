#include<iostream>

using namespace std;

bool isPossible(int a[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0;i<n;i++)
    {
        if(pageSum + a[i]<=mid)
        {
            pageSum+= a[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || a[i] > mid)
            {
                return false;
            }
            pageSum = a[i];
        }
    }
    return true;
}

int allocateBooks(int a[], int n, int m)
{
    //s -> start; e -> end;

    int s = 0;
    int sum =0 ;
    for(int i = 0;i<n;i++)
    {
        sum = sum+a[i];
    }
    int e = sum;
    int ans = -1;
    int mid= s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(a,n,m,mid))
        {
            ans = mid;
            e = mid -1;
        }
        else
        {
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main()
{
    int Size;
    int arr[10];
    int key;

    cout<<"Enter the Array Size : ";
    cin>>Size;

    cout<<"Enter the Array Elements : ";
    for(int i = 0; i<Size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of students : ";
    cin>>key;

    int pages = allocateBooks(arr, Size, key);
    cout<<"minimum pages allocated : "<<pages;
    cout<<endl;

}
