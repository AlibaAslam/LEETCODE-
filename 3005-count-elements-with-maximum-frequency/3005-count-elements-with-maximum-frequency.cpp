class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int,int>freq;
        int maxm=0;
        for(int i : nums)
        {

            if(freq.count(i))
          {
              freq[i]++;
              maxm=max(maxm, freq[i]);
          }
          else{
            freq[i]=1;
             maxm=max(maxm, freq[i]);
          }
            
        }
        int count=0;
        for(int i=0; i<=freq.size()-1; i++)
        {
            if(freq[i]==maxm)
            count++;
        }
        
    return count*maxm;
        
    }
};