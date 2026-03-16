class Solution {
public:
    int mySqrt(int x) {

        if(x<2)
        return x;
        long ans=x/2;
    for(long i=0; i<=x/2; i++)
    {
        if(i*i==x)
        {
            return i;
        }
        else if(i*i>x)
        {
            return i-1;
         }
          
    }
    return ans;
        
    }
};