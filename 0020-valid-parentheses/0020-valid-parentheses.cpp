class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.length();i++)
        {
            char f=s[i];
            if(st.empty())
            {
                st.push(f);
            }
            else if((st.top()=='(' && f==')')||(st.top()=='[' && f==']')||(st.top()=='{' && f=='}'))
            {
                st.pop();
            }
            else{
             st.push(f);
            }
        }
        
        return st.empty();

        
    }
};