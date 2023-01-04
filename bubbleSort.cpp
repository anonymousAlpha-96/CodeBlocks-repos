/*
	* Bubble sort Algorithm
	* Tested Okay
*/

#include<iostream>
#include<algorithm>

using namespace std;

//function declaration
void sortPrint(int a[], int asize);

//main part
int main()
{
	//array declaration
	int array[] = {8, 26,25, 2, 18, 23, 10};

	//array size verification
	int a_size = sizeof(array)/sizeof(array[0]);
	cout<<"Array Size is : "<<a_size<<endl;
	
	//prints the array values before SORT
	cout<<"Array values before sorting : "<<endl;
	sortPrint(array, a_size);

	//Sorting part
	//sort(array,array + a_size);

	//bubble sort technique
	int temp;
	for(int i = 0;i<a_size;i++)
	{
		for(int j = i+1;j<a_size;j++)
		{
			if(array[j]<array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	//prints the array values after SORT
	cout<<"\nArray values after sorting : "<<endl;
	sortPrint(array, a_size);
	cout<<endl;

	return 0;

}
//function to display the array elements
void sortPrint(int a[], int asize)
{
	for(int i  = 0; i<asize; ++i) //++i
	{
		cout<<a[i]<<" ";
	}
}
