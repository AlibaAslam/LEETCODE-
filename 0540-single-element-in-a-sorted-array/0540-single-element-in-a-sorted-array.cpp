class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int f=0;
        int l=n-1;
        int m=0;
        while(f<l)
        {
            m=f+(l-f)/2;
            if(m%2==1)
            m--;
            if(nums[m]==nums[m+1])
            {
                f=m+2;
            }
            else{
                l=m;
            }
        }

        return nums[f];
    }
};