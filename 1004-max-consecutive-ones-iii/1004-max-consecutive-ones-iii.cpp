// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {


    //  THIS APPROACH WILL SHOW YOU TIME LIMIT EXCEEDED
    //     int n= nums.size();
    //     int maxm =INT_MIN;
    //     int sum=0;

    //     for(int i=0; i<=n-1;i++)
    //     {
    //         int ref=k;
    //         sum=0;
    //         for(int j=i ; j<=n-1; j++)
    //         {
                
    //             if(nums[j]==0 && ref>0)
    //             {
    //                 sum++;
    //                 ref--;
    //             }
    //             else if(nums[j]==1)
    //             {
    //                 sum++;
    //             }
    //             else{
                   
    //                 break;
    //             }
                
    //         }
    //          maxm=max(maxm,sum);
    //     }   
    // return maxm;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int zero_count = 0;
        int maxm = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                zero_count++;
            }

            while (zero_count > k) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }

            maxm = max(maxm, right - left + 1);
        }

        return maxm;
    }
};
    





        
 