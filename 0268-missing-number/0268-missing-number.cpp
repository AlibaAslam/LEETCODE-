class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method one
        //int n= nums.size();
        //int sum=(n*(n+1))/2;
        //for(int var : nums)
        //{
         //   sum = sum- var;
        //}
        //return sum; 


        //Method 2
        int a=0;
        for(int i=0; i<=nums.size(); i++)
        {
            a=a^i;
        }  
        for(int i=0; i<nums.size(); i++)
        {
           a=a^nums[i];
        }
        return a;    

    }
};