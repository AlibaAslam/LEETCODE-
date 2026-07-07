class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        
        for (char i : s) {
            if (i == '*') {
                if (!ans.empty()) {
                    ans.pop_back(); // Acts exactly like st.pop()
                }
            } else {
                ans.push_back(i);  // Acts exactly like st.push(i)
            }
        }
        
        return ans;
    }
};