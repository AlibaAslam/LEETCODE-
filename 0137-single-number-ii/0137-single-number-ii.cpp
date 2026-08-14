class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums)
        {
            int c = freq[i];
            freq[i]= ++c;

        }
        for(auto i : freq)
        {
            if(i.second==1)
            return i.first;
        }
        return -1;
    }
};