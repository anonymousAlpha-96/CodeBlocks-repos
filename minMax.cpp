#include<iostream>

using namespace std;

int getMax(int Array[], int n)
{
    int maxx = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(Array[i]>maxx)
        {
            maxx = Array[i];
        }
    }
    return maxx;
}
int getMin(int Array[], int n)
{
    int minn = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(Array[i]<minn)
        {
            minn = Array[i];
        }
    }
    return minn;
}


int main()
{
    int Size;
    cout<<"Enter the Size of the Array ";
    cin>>Size;
    int number[100]={0};

    cout<<"Enter the elements :";
    for(int i = 0;i<Size;i++)
    {
        cin>>number[i];
    }

    cout<<"Max element in array is : "<<getMax(number, Size)<<endl;
    cout<<"Min element in array is : "<<getMin(number,Size)<<endl;
}
