//convert user input values into binary form
// input as decimal values

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the Decimal number find the binary form : ";
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0)
    {
        int bit = n & 1;

        ans = (bit * pow(10,i)+ans);

        n = n >> 1;
        i++;
    }
    cout<<"\nBinary form is : "<<ans<<endl;

}
