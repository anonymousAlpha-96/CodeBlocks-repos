//rotate an array, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>

using namespace std;

void rotateArray(int v[], int k, int n)
{
    int temp[10];

    for(int i = 0;i<n;i++)
    {
        temp[(i+k)%n] = v[i];
    }
    v = temp;
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
