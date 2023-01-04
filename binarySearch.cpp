/*
	* Application for binary search
	* Tested Okay!.
*/

#include<iostream>
#include<algorithm>

using namespace std;

//function to display the array elements
void sortPrint(int a[], int asize)
{
	for(int i  = 0; i<asize; ++i) //++i
	{
		cout<<a[i]<<" ";
	}
}

//main part
int main()
{
	int a_size;
	int array[100];
	int search;

	//input for array size
	cout<<"Enter the array size : ";
	cin>>a_size;

	//input to the array
	cout<<"Enter the elements of array : ";
	for(int i = 0; i<a_size; i++)
	{
		cin>>array[i];
	}

	//prints the array values before SORT
	cout<<"Array values before sorting : "<<endl;
	sortPrint(array, a_size);

	//Sort functionality calling
	sort(array,array + a_size);

	//prints the array values after SORT
	cout<<"\nArray values after sorting : "<<endl;
	sortPrint(array, a_size);
	cout<<endl;

	cout<<"Enter the element to be searched in the array :"<<endl;
	cin>>search;

	if(binary_search(array, array+a_size, search))
		cout<<"Element found in the array"<<endl;
	else
		cout<<"Element not found in the array"<<endl;


	return 0;
}
