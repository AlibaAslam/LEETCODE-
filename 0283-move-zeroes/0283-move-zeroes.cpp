class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0 && nums[j]==0)
            {
              nums[i]=nums[i]-nums[j];
              nums[j]=nums[i]+nums[j];
              nums[i]=nums[j]-nums[i];
                
            }
            if(nums[j]!=0)
            {
                j++;
            }
        }

        
    }
};