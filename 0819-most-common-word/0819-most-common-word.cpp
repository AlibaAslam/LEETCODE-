class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        // Lowercase paragraph
        for (char &c : paragraph) {
            c = tolower(c);

            if (ispunct(c))
                c = ' ';
        }

        unordered_set<string> set;

        for (string word : banned) {
            for (char &c : word) {
                c = tolower(c);
            }

            set.insert(word);
        }

        unordered_map<string, int> mp;

        string ans = "";
        int max = 0;

        string word;
        stringstream ss(paragraph);

        while (ss >> word) {

            if (set.count(word))
                continue;

            if (mp.count(word)) {
                mp[word]++;
            }
            else {
                mp[word] = 1;
            }

            if (mp[word] > max) {
                max = mp[word];
                ans = word;
            }
        }

        return ans;
    }
};