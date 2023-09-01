#include<iostream>
using namespace std;

bool isPalindrome(string &s)
{
	int start=0;
	int end=s.size()-1;

	while(start<=end)
	{
		if(s[start]!=s[end])
		{
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