class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n= citations.size();
        sort(citations.rbegin(), citations.rend());
        int ans=0;
        for(int i=0; i<=n-1; i++)
        {
            if(citations[i]>=ans+1)
            {
               ans++;
            }
           else{
            break;
           }
        }
        return ans;
    }
};