#include <bits/stdc++.h> 
vector<int> reverse(vector<int> v)
{
	int start=0;
	int end=v.size()-1;

	while(start<end)
	{
		swap(v[start],v[end]);
		start++;
		end--;
	}

	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
	int j=m-1;
	vector<int> ans;
	int carry=0;

	while(i>=0 && j>=0)
	{
		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i>=0)
	{
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}

	while(j>=0)
	{
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);		
		j--;
	}

	while(carry!=0)
	{
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	
	return reverse(ans);
}