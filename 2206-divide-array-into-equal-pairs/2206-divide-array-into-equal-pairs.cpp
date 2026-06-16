class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(1001,0);
        if(n%2!=0)
        return false;
        for(int i: nums)
        {
            arr[i]++;   
        }
        for(int x: arr)
        {
            if(x%2!=0)
          return false;
        }
        return true;

        
    }
};