#include<iostream>
#include<vector>

using namespace std;

int intersectionElement(int n, int array1[], int m, int array2[])
{
    int i = 0,j = 0;
    vector<int> ans;
    while(i<n && j<m)
    {
            if(array1[i] == array2[j])
            {
                ans.push_back(array1[i]);

                i++;
                j++;
            }
            else if(array1[i] < array2[j])
            {
                i++;
            }
            else{
                j++;
            }
    }
    return ans;
}


int main()
{
    return 0;

    int arr1[100], arr2[100];
    int size1, size2;

    cout<<"Enter first array Size : ";
    cin>>size1;

    cout<<"Enter the first Array Elements : ";
    for(int a = 0;a<size1;a++)
    {
        cin>>arr1[a];
    }

    cout<<"Enter second array Size : ";
    cin>>size2;

    cout<<"Enter the second Array Elements : ";
    for(int b = 0;b<size2;b++)
    {
        cin>>arr2[b];
    }

    cout<<"Intersected Elements are : "<<intersectionElement(size1, arr1, size2, arr2);


}
