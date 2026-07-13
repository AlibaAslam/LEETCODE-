class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxm=INT_MIN;
        int n= accounts.size();
        int i=0;
       while(n>0)
        {
            int sum=accumulate(accounts[i].begin(), accounts[i].end(), 0);
            i++;
            n--;
            maxm= max(sum, maxm);
        }
        
        return maxm;
    }
};