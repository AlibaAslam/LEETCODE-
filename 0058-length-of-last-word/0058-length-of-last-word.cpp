class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int f=0;
        int sz=s.size();
        for(int i=sz-1; i>=0; i--)
        {
            if(s[i]==' ')
            {
                if(f==0)
                {
                    continue;
                }
                else{
                    break;
                }
            }
            else{
                c++;
                f=1;
            }

        }
        return c;
    }
};