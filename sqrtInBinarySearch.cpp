#include<iostream>

using namespace std;


long long int binarySearch(int n)
{
    int start = 0;
    int End = n;

    long long int mid = start + (End-start)/2;

    long long int ans = -1;

    while(start<=End)
    {
        long long int square = mid*mid;

        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            start = mid+1;
        }
        else if(square > n)
        {
            End = mid - 1;
        }
        mid = start +(End-start)/2;
    }
    return ans ;
}

/*int sqrtOfNumber(int x)
{
    return binarySearch(x);
}*/

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for(int i = 0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans;j*j<n;j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int number;

    cout<<"Enter the number to find the sqrt : ";
    cin>>number;

    int squareRoot = binarySearch(number);
    cout<<"Square root of Entered digit is : "<<morePrecision(number,3,squareRoot)<<endl;

}
