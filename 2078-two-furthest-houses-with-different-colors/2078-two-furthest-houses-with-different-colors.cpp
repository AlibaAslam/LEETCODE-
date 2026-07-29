class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0;
        int n= colors.size();
        for(int i=0; i<=n-1; i++)
        {
            if(colors[i]!=colors[n-1-i])
            ans=max(ans,n-1-i);

            if(colors[i]!=colors[0])
            ans=max(ans,i-0);
        }
        return ans;
    }
};