#include<iostream>
using namespace std;

    char toLower(char ch)
    {
        if(ch>='A' && ch<='Z')
            return (ch-'A'+'a');
        else
            return ch;
    }

bool checkPalindrome(string s)
{
    string temp="";

    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a' && s[i]<='z') 
        || (s[i]>='A' && s[i]<='Z')
        || (s[i]>='0' && s[i]<='9'))
        {
            temp+=toLower(s[i]);
        }
    }

    int start=0;
    int end=temp.size()-1;

    while(start<=end)
    {
        if (temp[start] != temp[end]) {
            return 0;
        }
        else 
        {
            start++;
            end--;
        }
    }
    return 1;
}