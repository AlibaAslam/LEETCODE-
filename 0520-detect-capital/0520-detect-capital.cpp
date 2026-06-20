class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        int n = word.size();
        if (isupper(word[0])) {
            for(int i=1 ; i<n; i++)
            {
                if(isupper(word[i]))
                {
                    c++;
                }
            }
            if(c==n-1 || c==0)
                return true;
        }
        else{
            if (islower(word[0])) {
                for(int i=1 ; i<n; i++)
                {
                    if(islower(word[i]))
                    {
                        c++;
                    }
                }
                if(c==n-1)
                    return true;
            }
        }
        return false;
    }
};