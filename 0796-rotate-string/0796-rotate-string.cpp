class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0; i<=s.size();i++)
        {
        string ans =s.substr(i)+s.substr(0,i);
        if(ans==goal)
        {
            return true;
        }
        }
       return false; 
    }
};