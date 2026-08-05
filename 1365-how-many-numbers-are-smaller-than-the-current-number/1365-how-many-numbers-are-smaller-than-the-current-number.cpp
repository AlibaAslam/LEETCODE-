class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>arr(102,0);
        for(int i: nums)
        {
            arr[i]++;
        }
        for(int i=1; i<arr.size();i++)
        {
            arr[i]=arr[i]+arr[i-1];

        }
        vector<int>ans(nums.size());
        for(int i=0; i<=nums.size()-1; i++)
        {
            if(nums[i]==0)
            ans[i]=0;

            else
            ans[i]=arr[nums[i]-1];
        }

        return ans;


        

   
       
        
    }
};