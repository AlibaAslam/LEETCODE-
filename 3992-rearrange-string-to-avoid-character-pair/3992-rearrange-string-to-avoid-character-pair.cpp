class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans="";
        string x_total="";
        string y_total="";
        string remainder="";
        int n= s.size();
        for(int i=0; i<=n-1; i++)
        {
            if(s[i]==x)
            {
                x_total+=s[i];
            }
             else if(s[i]==y)
            {
                y_total+=s[i];
            }
            else{
                remainder+=s[i];
            }
        }
        return y_total+remainder+x_total;
    }
};