class Solution {
public:

    int GCD(int a, int b)
    {
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxm=nums[0];
        for(int i=0; i<=n-1;i++)
        {
            maxm=max(nums[i],maxm);
            nums[i]=GCD(nums[i],maxm);
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        long long sum=0;
        while(j>i)
        {
           sum = sum + GCD(nums[i], nums[j]);
           i++;
           j--;

        }

    return sum;
        
    }
};