class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i:nums)
        {
            if(i!=nums[0])
            {
                return 1;
            }
        }
        return 0;
        
    }
};