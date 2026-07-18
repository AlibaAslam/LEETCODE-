class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>copy;
        for(int i: heights)
        {
            copy.push_back(i);
        }
        sort(copy.begin(),copy.end());
        int count=0;
        for(int i=0; i<=heights.size()-1; i++)
        {
            if(heights[i]!=copy[i])
            count++;
        }
        return count;
        
    }
};