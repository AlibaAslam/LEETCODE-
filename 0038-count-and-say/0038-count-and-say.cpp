class Solution {

     
        string count( string s)
        {
            string ans="";
            int c=1;
            for(int i=1; i<=s.size(); i++)
            {
                if(i<s.size() && s[i]==s[i-1])
                {
                    c++;
                }
                else{
                     ans+= to_string(c);
                    ans+=s[i-1];
                    c=1;

                }
                
            }
            return ans;
        }
 public:
    string countAndSay(int n) {
        string s = "1";

        while(n>1)
        {
            s= count(s);
            n--;  
        }
        return s;
    }
};