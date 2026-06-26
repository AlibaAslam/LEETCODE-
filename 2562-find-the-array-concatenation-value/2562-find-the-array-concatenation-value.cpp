class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int en = n - 1;
        long long concat_val = 0;
        while (st <= en) {
            if (st == en) {
                concat_val += nums[st];
                break;
            }
            string a = to_string(nums[st]);
            string b = to_string(nums[en]);
            string result = a + b;
            long long total = stoll(result);
            concat_val += total;
            st++;
            en--;
        }
        return concat_val;  
    }
};
// class Solution {
// public:
//     long long findTheArrayConcVal(vector<int>& nums) {
//         long long con_val = 0;
//         int n = nums.size();
//         int st = 0;
//         int en = n - 1;
        
//         while (st <= en) {
//             if (st == en) {
//                 con_val += nums[st];
//                 st++;
//             }
//             else if (nums[en] < 10) {
//                 con_val += (nums[st]) * 10 + (nums[en]);
//                 st++;
//                 en--;
//             }
//             else if (nums[en] < 100) {
//                 con_val += (nums[st]) * 100 + (nums[en]);
//                 st++;
//                 en--;
//             }
//             else if (nums[en] < 1000) {
//                 con_val += (nums[st]) * 1000 + (nums[en]);
//                 st++;
//                 en--;
//             }
//             else if (nums[en] < 10000) {
//                 con_val += (nums[st]) * 10000 + (nums[en]);
//                 st++;
//                 en--;
//             }
//             else if (nums[en] < 100000) {
//                 con_val += (nums[st]) * 100000 + (nums[en]);
//                 st++;
//                 en--;
//             }
//             else {
//                 con_val += (nums[st]) * 1000000 + (nums[en]);
//                 st++;
//                 en--;
//             }
//         }
//         return con_val;
//     }
// };