class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>idx(26,0);
        vector<int>check(26,0);
        string ans="";
        int n=s.size();
        for(int i=0; i<=n-1;i++)
        {
            idx[s[i]-'a']=i;
        }
        for(int i=0; i<=n-1;i++)
        {
            char c=s[i];
            if(check[c-'a']==1)
            {
                continue;
            }
            while(!ans.empty() && ans.back()>c && idx[ans.back()-'a']>i)
            {
                check[ans.back()-'a']=0;
                ans.pop_back();
            }
            ans.push_back(c);
            check[c-'a']=1;
        }
        
    return ans;
        
    }
};