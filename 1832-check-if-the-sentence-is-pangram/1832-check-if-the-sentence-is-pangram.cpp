class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>freq(26);
        for( char i : sentence)
        {
            freq[i-'a']=true;
        }
        for(bool i : freq)
        {
            if(!i)
            return false;
        }
        return true;
    }
};