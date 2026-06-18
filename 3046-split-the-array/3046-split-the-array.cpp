class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int>ans(101,0);
        for(int i : nums)
        {
            ans[i]++;
            if(ans[i]>2)
            return false;

           
        }
        return true;
    }
};