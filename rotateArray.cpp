
//rotate an array, rotate the array to the left by k steps, where k is non-negative.

#include<iostream>
#include<vector>

using namespace std;


void leftRotate(int a[], int n)
{
    int temp = a[0];

    for(int i = 0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}

void rotateArray(int v[], int k, int n)
{
    for(int i =0;i<k;i++)
    {
        leftRotate(v,n);
    }
}

void printArray(int a[], int n)
{
    cout<<"Array Elements after the rotate are : ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    int ASize;
    int Aarr[10];
    int shift;

    cout<<"Enter the First array Size : ";
    cin>>ASize;
    cout<<"Enter the Element to shift : ";
    cin>>shift;
    cout<<"Enter the First Array Elements : ";
    for(int i = 0;i<ASize;i++)
    {
        cin>>Aarr[i];
    }

    rotateArray(Aarr, shift, ASize);

    printArray(Aarr, ASize);
}
