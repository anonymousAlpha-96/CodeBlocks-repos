/*
	* quick sort Algorithm
	* Tested Okay
*/

#include<iostream>
#include<algorithm>

using namespace std;

//function declaration
void sortPrint(int a[], int asize);
void QuickSort(int arr[], int start, int end);
int divideAndRule(int arr[], int start, int end);

//quick sort functionality
void QuickSort(int arr[], int start, int end)
{
	if(start<end)
	{
		int d = divideAndRule(arr, start, end);
		QuickSort(arr,start, (d-1));
		QuickSort(arr, (d+1), end);
	}
}

//devide and rule functionality
int divideAndRule(int arr[], int start, int end)
{
	int pivot = arr[end];
	int index = start;

	for(int i = start; i<end;i++)
	{
		if(arr[i]<pivot)
		{
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
			index++;
		}
	}
	int temp = arr[end];
	arr[end] = arr[index];
	arr[index] = temp;

	return index;
}


//main part
int main()
{
	int a_size;
	int temp;
	int j, min, k;
	int array[10];

	cout<<"Enter the Size of array : ";
	cin>>a_size;

	//user input to array
	cout<<"\nEnter the elements : ";
	for(int i = 0;i<a_size;i++)
	{
		cin>>array[i];
	}

	//calls the print array function before SORT
	cout<<"Array values before sorting : "<<endl;
	sortPrint(array, a_size);

	//quick sort function calling
	QuickSort(array, 0, (a_size - 1));

	//calls the print array function after SORT
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
