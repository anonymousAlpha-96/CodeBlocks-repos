/*
	* insertion sort Algorithm
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
	int a_size;
	int temp;
	int j;
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

	//insertion sort algorithm
	for(int i = 1;i<=a_size-1;i++)
	{
		temp = array[i];
		j = i-1;
		while((temp < array[j]) && (j>=0))
		{
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = temp;
	}

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
