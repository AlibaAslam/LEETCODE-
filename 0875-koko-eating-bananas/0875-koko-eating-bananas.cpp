class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int s=1;
        int e= piles[piles.size()-1];
        int ans=piles[piles.size()-1];
        int k=0;
        while(s<=e)
        {
            k= s+(e-s)/2;
            long no_of_hours=hours(piles,k);
            if(no_of_hours>h)
            {
                s=k+1;
            }
            else{
                e=k-1;
                ans=k;
            }

        }
    
           return ans; 
    }

    long hours(vector<int>& piles,int k)
    {
        long sum=0;
        for(int i : piles)
        {
            sum = sum+(i+k-1)/k;//ciel value
        }
        return sum;
    }
    
};