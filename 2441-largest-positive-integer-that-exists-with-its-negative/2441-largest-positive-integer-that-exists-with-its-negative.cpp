class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s;
        for(int i  : nums)
        {
            s.insert(i);
        }

        int ans=-1;
        for(int i : nums)
        {
            if(s.find(-(i))!=s.end())
            {
                ans=max(ans, i);
            }
               
        }

        return ans;
        
         }
};