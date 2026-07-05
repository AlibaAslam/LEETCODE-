class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int n= nums.size();
       sort(nums.begin(), nums.end());
       int left=0;
       int right=n-1;
      while(right>left)
      {
        if((nums[right]+nums[left])==k)
        {
            count= count+1;
             left++;
             right--;
        }
        else if((nums[right]+nums[left])<k)
        {
            left++;
        }
        else{
            right--;
        }
        
      }
    return count;
        
    }
};