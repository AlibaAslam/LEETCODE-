class Solution {
public:
    string convertToTitle(int c) {
        string ans="";
        while(c>0)
        {
            //c=c-1;
            c--;
            ans+=char ('A')+c%26;
            // c=c/26;
            c/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};