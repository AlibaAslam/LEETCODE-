class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(256, 0);
        int max = 0;
        int start = 0;
        
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            vec[ch]++;
            
            while (vec[ch] > 1) {
                char sr = s[start++];
                vec[sr]--;
            }
            
            int sz = i - start + 1;
            if (sz > max) {
                max = sz;
            }
        }
        
        return max;
    }
};