class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n;
        int sum=0;
        int pro=1;
        while(temp>0)
        {
            int d= temp%10;
            pro=pro*d;
            sum=sum+d;
            temp=temp/10;
        }
        return( pro-sum);
        
    }
};