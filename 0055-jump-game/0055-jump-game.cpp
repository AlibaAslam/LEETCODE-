class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool ans= true;
        int move=1;
        int n= nums.size();
        for(int i=n-2; i>=0 ; i--)
        {
            if(nums[i]>=move)
            {
                move=1;
                ans=true;
            }
            else{
                move=move+1;
                ans= false;
            }
        }
        return ans;

    }
};