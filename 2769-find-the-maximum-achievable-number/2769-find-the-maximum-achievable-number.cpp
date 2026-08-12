class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=0;
        for(int i=1; i<=t; i++)
        {
            x=x-1;
            num=num+1;
        }
         return abs(x-num);
        
    }
};