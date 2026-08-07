class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>answer;
        unordered_set<int>set1(nums1.begin(), nums1.end());
          unordered_set<int>set2(nums2.begin(), nums2.end());
            unordered_set<int>set3(nums3.begin(), nums3.end());

            vector<int>freq(101);
            for(int i : set1)
            {
                freq[i]++;
            }
            for(int i : set2)
            {
                freq[i]++;
            }
            for(int i : set3)
            {
                freq[i]++;
            }
            for(int i=0; i<=freq.size()-1; i++)
            {
                if(freq[i]>=2)
                {
                    answer.push_back(i);
                }
            }

            return answer;
    }

};