#include<iostream>
#include<string>

using namespace std;

string removeSubstring(string s, string ss)
{
    while(s.length()!=0 && s.find(ss)<s.length())
    {
        s.erase(s.find(ss),ss.length());
    }
    return s;
}

int  main()
{
    string str, subStr;

    cout<<"Enter the string  : ";
    getline(cin, str);

    cout<<"Enter the Substring to remove : ";
    getline(cin,subStr);

    cout<<removeSubstring(str, subStr)<<endl;

    return 0;
}
