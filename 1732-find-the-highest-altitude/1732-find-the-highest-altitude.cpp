class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int ans=0;
        int maxm=INT_MIN;
        for(int i: gain)
        {
            sum=sum+i;
            maxm=max(maxm,sum);
            
        }
        if(maxm<0)
        return 0;
        

        return maxm;
        
    }
};