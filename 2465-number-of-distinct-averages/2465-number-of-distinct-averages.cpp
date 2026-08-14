class Solution {
public:
    int distinctAverages(vector<int>& nums) {
    unordered_set<int>s;
      int n = nums.size();
    sort(nums.begin(),nums.end());
    int i=0;
    int j=n-1;
      while(i<j)
      {
        int a= nums[i];
        int b=nums[j];
        int avg=(a+b);
        s.insert(avg);
        i++;
        j--;
      }
       return s.size();
    }
};