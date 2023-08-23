class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int count=1;
        vector<int> ans;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count==2)
                {
                    ans.push_back(nums[i]);
                    count=1;
                }
            }
            else
            {
                count=1;
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};