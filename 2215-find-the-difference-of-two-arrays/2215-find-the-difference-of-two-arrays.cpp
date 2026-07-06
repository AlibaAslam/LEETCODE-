class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
     std::vector<std::vector<int>> ans(2);
    for(int i: nums1)
    {
        if(find(nums2.begin(), nums2.end(), i) == nums2.end() &&
                find(ans[0].begin(), ans[0].end(), i) == ans[0].end())
                {
                    ans[0].push_back(i);
                } 
    }
     for(int i: nums2)
    {
        if(find(nums1.begin(), nums1.end(), i) == nums1.end() &&
                find(ans[1].begin(), ans[1].end(), i) == ans[1].end())
                {
                    ans[1].push_back(i);
                } 
    }
    return ans;
     
    }
};