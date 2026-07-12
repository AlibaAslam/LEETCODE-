class Solution {
public:
    int arrangeCoins(int n) {
        int stairs=0;
        int rem_coins=n;
        for(int i=1; i<=n; i++)
        {
            if(n==1)
            return 1;

            if(rem_coins>=i)
            {
                rem_coins=rem_coins-i;
                stairs+=1;
            }
            else{
                break;
            }
        }
        return stairs;
    }
};