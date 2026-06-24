class Solution {
public:
    string editor(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                st.push(s[i]);
            } else if (!st.empty()) {
                st.pop();
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        return editor(s) == editor(t);
    }
};