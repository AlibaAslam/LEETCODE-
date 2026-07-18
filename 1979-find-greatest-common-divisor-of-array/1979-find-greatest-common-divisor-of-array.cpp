class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxm=INT_MIN;
        int minm=INT_MAX;
        for(int i : nums)
        {
            maxm=max(i,maxm);
            minm=min(i,minm);
        }
        int a=minm;
        int b=maxm;
           while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;

        
    }
};