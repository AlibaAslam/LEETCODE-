class Solution {
public:
    char repeatedCharacter(string s) {
        int n= s.size();
        string ans = "";
        for(int i=0; i<=n-1; i++)
        {
            if(ans.contains(s[i]))
            return s[i];

            ans+=s[i];


        }
        return 0;
        
    }
};