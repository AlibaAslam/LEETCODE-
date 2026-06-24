class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        vector<string> words;

        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }
        
        if (words.size() != pattern.size())
            return false;

        map<string, char> mp2;
        for (int i = 0; i < pattern.size(); i++) {
            if (mp.count(pattern[i])) {
                if (mp[pattern[i]] != words[i]) {
                    return false;
                }
            } else {
                if (mp2.count(words[i])) {
                    return false;
                }
                mp[pattern[i]] = words[i];
                mp2[words[i]] = pattern[i];
            }
        }
        return true;
    }
};