/*
	* Application for STL practice
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
	//array declaration
	int array[] = {8, 26,25, 2, 18, 23};

	//array size verification
	int a_size = sizeof(array)/sizeof(array[0]);
	
	//cout<<"Array Size is : "<<a_size<<" size of  "<<sizeof(array)<<" size of array [0]"<<sizeof(array[0])<<endl;
	
	//prints the array values before SORT
	cout<<"Array values before sorting : "<<endl;
	sortPrint(array, a_size);

	//Sorting part
	sort(array,array + a_size);

	//prints the array values after SORT
	cout<<"\nArray values after sorting : "<<endl;
	sortPrint(array, a_size);
	cout<<endl;

	return 0;
}
