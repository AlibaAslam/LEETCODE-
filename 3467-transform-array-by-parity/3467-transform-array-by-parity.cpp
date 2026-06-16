class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        int even=0;
        int i=0;
        for(int x :nums)
        {
            if(x%2==0)
            {
                even++;
            }
        }
        while(even>0)
        {
            ans[i++]=0;
            even--;
        }
        return ans;
    }
};