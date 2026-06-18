class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int sz= nums.size();
        vector<int>ans(sz);
        int p=0;
        int q=n;
        for(int i=0; i<sz;i=i+2)
        {
            ans[i]=nums[p++];
            ans[i+1]=nums[q++];
        }
        return ans;
    }
};