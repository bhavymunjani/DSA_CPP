#include<iostream>
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int i=0;
        
        while(i<arr.size())
        {
            int count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }

         ans.push_back(count);
         i=i+count;
        }

        sort(ans.begin(),ans.end());
        for(int k=0;k<ans.size()-1;k++)
        {
            if(ans[k]==ans[k+1])
            {
                return false;
            }
        }
       return true;
    }
};

int main()
{
    
    return 0;
}