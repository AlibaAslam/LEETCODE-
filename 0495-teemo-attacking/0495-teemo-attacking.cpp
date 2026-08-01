class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    // THIS APPROACH WILL GIVE TIME LIMIT EXCEEDED
    //     int n=timeSeries.size();
    //     unordered_set<int>attack;
    //     int pt=0;
    //     for(int i=0; i<=n-1; i++)
    //     {
    //      for(int j=timeSeries[i]; j<duration+timeSeries[i];j++)
    //      {
    //         attack.insert(j);
    //      }
    //     }

    // return attack.size();
        int n= timeSeries.size();
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            ans+= min((timeSeries[i+1]-timeSeries[i]), duration);
        }
        return ans+duration;
        

        
    }
};