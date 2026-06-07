class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        for(int i :nums)
        {
            ans[i]++;
            if(ans[i]==2)
            {
                return i;
            }
        }
        return 0;
    }
};