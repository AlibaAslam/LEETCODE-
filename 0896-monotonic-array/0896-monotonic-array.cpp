class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc=0;
        int dec=0;
        for(int i=0; i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                inc=1;
            }
             else if(nums[i]<nums[i+1])
            {
                dec=1;
            }
           
        }
      if(inc==1 && dec==1) return false;
            return true;  
    }
};