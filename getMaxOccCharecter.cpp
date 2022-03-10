//Prints the maximum occured character in a string

#include<iostream>

using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};

    //create an array of count of characters
    for(int i = 0;i<s.length();i++)
    {
        char ch = s[i];
        int number = 0;

        //if string is in lowercase then use this
        //number = ch - 'a';

        //lower case
        if(ch >= 'a' && ch<='z')
        {
            number = ch - 'a';
        }
        //uppercase
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find maximum occured character
    int maxi = -1, ans =0;
    for(int i = 0;i<26;i++)
    {
        if(maxi <arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalMax = 'a'+ans;
    return finalMax;
}

int main()
{
    string str;

    cout<<"Enter a string : ";
    cin>>str;
    cout<<getMaxOccChar(str)<<endl;

}
