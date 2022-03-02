#include <stdio.h>
#include<iostream>
#include <sys/time.h>

using namespace std;

int main ()
{
    // Start measuring time
    struct timeval begin, end;
    gettimeofday(&begin, 0);

    long long int sum;
    sum = 500000*1024/10;
    sum=sum+sum*10;

    cout<<"Displays some nonsense : ";
    cout<<sum<<endl;



    // Stop measuring time and calculate the elapsed time
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

    printf("Time measured: %.3f seconds.\n", elapsed);

    cout<<endl;
    cout<<elapsed;

    //return 0;
}
