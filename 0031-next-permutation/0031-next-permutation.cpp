class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() <= 1) return;
        
        int flag = 0;
        int n = nums.size();
        
        for (int j = n - 2; j >= 0; j--) {
            int target = -1;
            for (int i = n - 1; i > j; i--) {
                if (nums[i] > nums[j]) {
                    if (target == -1 || nums[i] < nums[target]) {
                        target = i;
                    }
                }
            }
            if (target != -1) {
                int temp = nums[target];
                nums[target] = nums[j];
                nums[j] = temp;
                reverse(nums.begin() + j + 1, nums.end());
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) {
            reverse(nums.begin(), nums.end());
        }
    }
};