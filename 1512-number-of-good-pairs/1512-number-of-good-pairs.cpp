class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>freq(101);
        int ans=0;
        for(int i : nums)
        {
            ans+=freq[i];
            freq[i]++;

        }
        return ans;

        
    }
};