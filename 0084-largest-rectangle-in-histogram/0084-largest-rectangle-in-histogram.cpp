class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        st.push(-1);
        int maxm=0;
        int i=0;
        for(i=0; i<heights.size(); i++)
        {
            while(st.top()!=-1 && heights[st.top()]>=heights[i])
            {
                int curr_bar_height= heights[st.top()];
                st.pop();
                int curr_width=i-st.top()-1;
                maxm=max(maxm, curr_bar_height*curr_width);
            }
            st.push(i);
        }
        while(st.top()!=-1)
        {
            int curr_bar_height= heights[st.top()];
            st.pop();
            int curr_width=i-st.top()-1;
            maxm= max(maxm, curr_bar_height*curr_width);
        }
        return maxm;
        
    }
};