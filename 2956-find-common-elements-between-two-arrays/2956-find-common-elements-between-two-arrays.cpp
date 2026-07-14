class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>check1;
        unordered_set<int>check2;
        for(int i: nums1)
        {
            check1.insert(i);
        }
        for(int i: nums2)
        {
            check2.insert(i);
        }
        vector<int>ans(2,0);
        for(int i=0; i<=nums2.size()-1; i++)
        {
            if(check1.contains(nums2[i]))
             ans[1]++;

        }
        for(int i=0; i<=nums1.size()-1; i++)
        {
            if(check2.contains(nums1[i]))
             ans[0]++;

        }
        return ans;


    }
};