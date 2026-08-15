class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        int z_count=0;
        for(int i : nums)
        {
            xr=xr^i;
            if(i==0)
            {
                z_count++;
            }
        }
        if(xr!=0)
        return nums.size();
        if(z_count==nums.size())
        return 0;
         
        return  nums.size()-1;


        
    }
};