class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        int count=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0)
            zero++;
            else if(nums[i]==1)
            one++;
            else 
            two++;
        }
        while(zero>0)
        {
            nums[count++]=0;
            zero--;
        }
          while(one>0)
        {
            nums[count++]=1;
            one--;
        }
        while(two>0)
        {
            nums[count++]=2;
            two--;
        }
        
    }
};