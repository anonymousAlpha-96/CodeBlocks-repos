//find the peak element in mountain array

#include<iostream>

using namespace std;

//it will search the peak element in an given binary array
int peakElement(int a[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]<a[mid+1])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid= s+(e-s)/2;
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

    int peak = peakElement(arr,Size);
    cout<<"Peak Element in an array is at index : "<<peak;
    cout<<endl;

}
