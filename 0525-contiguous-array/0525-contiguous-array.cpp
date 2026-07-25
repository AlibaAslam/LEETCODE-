class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int maxlen=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0; i<=nums.size()-1; i++)
        {
            if(nums[i]==1)
            sum=sum+1;
            else
            sum=sum-1;
            if(m.find(sum)!=m.end())
            maxlen=max(maxlen,i-m[sum]);
            else
            m[sum]=i;
        }


return maxlen;

    }
};