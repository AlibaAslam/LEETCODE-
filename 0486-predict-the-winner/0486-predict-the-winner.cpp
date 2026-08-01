class Solution {
     int score(vector<int>&nums, int i, int j)
     {
        if(i>j)
        return 0;
        int take_first = nums[i]- score(nums,i+1, j);
         int take_last = nums[j]- score(nums,i, j-1);

         return max(take_first, take_last);
     }
public:
    bool predictTheWinner(vector<int>& nums) {
         int i=0;
         int j=nums.size()-1;
         return score(nums, i, j)>=0;


    }
};