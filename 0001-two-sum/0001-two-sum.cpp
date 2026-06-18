class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz=nums.size();
        vector<int>ans(2);
        for(int i=0; i<=sz-1; i++)
        {
            int rem=target-nums[i];
            for(int j=i+1; j<=sz-1;j++)
            {
                if(rem==nums[j])
                {
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
    }
};