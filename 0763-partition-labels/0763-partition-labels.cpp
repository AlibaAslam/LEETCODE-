class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<int> freq(26);
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]-'a']=i;
        }
        int st=0;
        int end=0;
        for(int i=0; i<s.size(); i++)
        {
            end= max(end, freq[s[i]-'a']);

            if(i==end)
            {
                ans.push_back(end-st+1);
                st= end+1;
            }
        }

        return ans;
    }
};