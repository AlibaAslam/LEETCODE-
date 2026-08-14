class Solution {
public:
    int maximumLengthSubstring(string s) {
    vector<int>freq(26);
    int st=0;
    int ans=0;
    for(int i=0; i<=s.size()-1 ; i ++)
    {
        freq[s[i]-'a']++;
        while(freq[s[i]-'a']>2)
        {
            freq[s[st]-'a']--;
            st++;
        }
        ans=max(ans, i-st+1);
    }
        return ans;
        
    }
};