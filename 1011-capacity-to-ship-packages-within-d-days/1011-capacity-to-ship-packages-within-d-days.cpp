class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
      int maxm=INT_MIN;
      int sum=0;
      for(int i=0; i<=n-1;i++)
      {
        maxm = max(maxm,weights[i]);
        sum=sum+weights[i];
      }
      int start=maxm;
      int end=sum; 
      int mid= start+(end-start)/2;
      while(end>=start)
      {
        mid= start+(end-start)/2;
        if(weightcheck(weights,mid)<=days)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
      }
      return start;
        
    }

    int weightcheck(vector<int>& weights, int mid)
    {
        int day=1;
        int load=0;
        for(int i: weights){
            if(load+i<=mid)
            {
                load+=i;
            }
            else{
                day++;
                load=i;
            }
        }
        return day;
    }

    
};