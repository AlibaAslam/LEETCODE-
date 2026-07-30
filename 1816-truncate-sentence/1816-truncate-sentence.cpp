class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        vector<string>update;
        string word;
        stringstream a(s);
        while(a>>word){
            update.push_back(word);
        }
        string ans="";
        int i=0;
        while(k>0)
        {
             ans= ans+ update[i];
             if(k>1)
             {
                ans+=" ";
             }
             k--;
            i++;
           
        }
        return ans;
        
    }
};