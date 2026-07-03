class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word;
        stringstream ss(s);
        
        while (ss >> word) {
            ans.push_back(word);
        }
        
        string result = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            result += ans[i];
            if (i > 0) {
                result += " ";
            }
        }
        
        return result;
    }
};