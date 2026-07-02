class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxm=0;
        for(int i: candies){
            maxm=max(maxm,i);
        }
        for(int i: candies){
            if(i + extraCandies >=maxm)
            {
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
       return ans; 
    }
};