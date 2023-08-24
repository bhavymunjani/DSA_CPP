#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main()
{
    
    return 0;
}
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> setAns;

        

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int k=j+1;
                int l=nums.size()-1;
                while(k<l)
                {
                    long long int sum1=nums[i]+nums[j];
                    long long int sum2=+nums[k]+nums[l];
                    long long int sum=sum1+sum2;
                    if(sum==target)
                    {
                        setAns.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        for(auto i:setAns)
            {
                ans.push_back(i);
            }

            return ans;
    }

};