class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(char c: s)// Converting the string into lowercase and removing all things except characters
        {
            if(isalnum(c))
            temp+= tolower(c);
            // this will update our string as "amanaplanacanalpanama"
        }
        int sz= temp.size();
        int st=0;
        int end= sz-1;
        while(end>st)
        {
            if(temp[st]!=temp[end])
            {
              return false;
            }
            st++;
            end--;
        } 

        return true;
        
    }
};