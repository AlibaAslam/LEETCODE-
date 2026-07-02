class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int a = word1.size();
        int b= word2.size();
        int i=0;
        for(; i<min(a,b);i++)
        {
            ans=ans+word1[i]+word2[i];
        }
        if(a>b)
        {
            for(int j=i; j<a; j++)
            {
                ans=ans+word1[j];
            }
        }
        else {
            for(int j=i; j<b; j++)
            {
                ans=ans+word2[j];
            }
        }
        return ans;
        
    }
};