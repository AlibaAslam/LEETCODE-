class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans(nums.size());
        int s=0;
        int e=ans.size()-1;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]%2==0)
            {
                ans.at(s++)=nums[i];
            }
            else
            {
                ans.at(e--)=nums[i];
            }
            i++;
        }
      return ans;  
    }
};