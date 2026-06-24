class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int end = min(i + k - 1, (int)s.size() - 1);
            rev(s, i, end); 
        }
        return s;
    }
    
    void rev(string &s, int i, int j) {
        while (i < j) { 
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};