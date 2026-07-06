class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pass=0;
        int sum=0;
        for(int i: nums)
        {
            sum=sum+i;

        }
        for(int i=0; i<=nums.size()-1;i++)
        {
            if(pass==sum-(pass+nums[i]))
            return i;
            else
            pass+=nums[i];
        }
        return -1;
    }
};