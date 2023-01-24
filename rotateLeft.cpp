/*Given an array of integers arr[] the task is to rotate
the array elements to the left by d positions

Input : [1,2,3,4,5]
leftShiftBy: 2
Output: [3,4,5,1,2]
*/

#include <iostream>

using namespace std;

void rotLeft(int array1[], int shift)
{
    int array2[5]={};
    int k=0;

    for (int i = shift; i < 5; i++) {
        array2[k] = array1[i];
        k++;
    }
    for (int i = 0; i < shift; i++) {
        array2[k] = array1[i];
        k++;
    }
    for(int i=0;i<5;i++)
    {
        array1[i] = array2[i];
        cout<<array1[i]<<" ";
    }
 }


int main()
{
    int arrayValue[5] = {1,2,3,4,5};

    int leftShift = 0;

    cout<<"Enter the value to shift : "<<endl;
    cin>>leftShift;
    rotLeft(arrayValue, leftShift);

    return 0;
}

