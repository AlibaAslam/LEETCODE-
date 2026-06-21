class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0);
        for( char i: magazine){
            freq[i-'a']++;
        }
        for(int i=0; i<ransomNote.size();i++)
        {
            if(freq[ransomNote[i]-'a']==0)
                return false;
                else{
                    freq[ransomNote[i]-'a']--; 
                }
        }

           
           return true; 
        
    }
};