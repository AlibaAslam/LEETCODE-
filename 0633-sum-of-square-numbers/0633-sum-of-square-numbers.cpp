class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start=0;
        long long end=sqrt(c);
        while(start<=end)
        {
            long long pro = (start*start)+(end*end);
            if(pro==c)
            return true;
             else if(pro>c)
             {
                end--;
                
             }
             else{
                start++;
             }
        }
        return false;
    }
};