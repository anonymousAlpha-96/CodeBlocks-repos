#include<iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the row size of an array : ";
    cin>>row;
    cout<<"Enter the column size of an array : ";
    cin>>col;

    //Creating a 2D Array
    int** arr = new int*[row];
    for(int i = 0;i<row;i++)
    {
        arr[i] = new int[col];
    }

    //accepting inputs
    cout<<"Enter the inputs to 2D array : ";
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //output
    cout<<"Output of 2D array : "<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //memory release/ clear
    for(int i =0;i<row;i++)
    {
        delete []arr[i];
    }
    delete[] arr;

    return 0;
}
