#include<iostream>
#include<vector>

using namespace std;


void mergeSort(int a[], int x, int b[], int y, int c[])
{
    int i = 0, j = 0; //first, second array index
    int k = 0;//third array index


    while(i<x && j<y )
    {
        if(a[i]<b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while(i<x)
    {
        c[k++]=a[i++];
    }
    while(j<y)
    {
        c[k++]=b[j++];
    }
}

void print(int ans[], int n)
{
    for(int i= 0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
}


int main()
{
    int ASize,BSize;
    int Aarr[10];
    int Barr[10];
    int Carr[10];
    cout<<"Enter the First array Size : ";
    cin>>ASize;
    cout<<"Enter the First Array Elements : ";
    for(int i = 0;i<ASize;i++)
    {
        cin>>Aarr[i];
    }
    cout<<"Enter the second array Size : ";
    cin>>BSize;
    cout<<"Enter the second Array Elements : ";
    for(int i = 0;i<BSize;i++)
    {
        cin>>Barr[i];
    }

    int n = ASize + BSize;

    mergeSort(Aarr, ASize, Barr, BSize,Carr);

    print(Carr, n);
}
