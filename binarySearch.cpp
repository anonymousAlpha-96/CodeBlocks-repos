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

int BinarySearch(int a[], int n, int k)
{
    int s = 0;
    int e = n-1;

    int mid = (s+e)/2;

    while(s <= e)
    {
        if(a[mid] == k)
        {
            return mid;
        }

        if(k > a[mid])
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return -1;

}
int  main()
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
    cout<<"Enter the Element to be search : ";
    cin>>key;

    int index = BinarySearch(arr, Size, key);
    //printArray(arr, Size);
    cout<<"Index of Searched Element is  : "<<index;
}
