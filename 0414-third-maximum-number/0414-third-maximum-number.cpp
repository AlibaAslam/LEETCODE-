class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int n= nums.size();
        long long max1= LLONG_MIN;
        long long max2= LLONG_MIN;
        long long max3= LLONG_MIN;
        for(int i=0; i<=n-1; i++)
        {
            int num=nums[i];
            if(num==max1 ||num==max2 ||num==max3 )
            continue;

            if(num>max1)
            {
                max3=max2;
                max2=max1;
                max1=num;
            }
             else if(num>max2)
            {
                max3=max2;
                max2=num;
            }
            else if(num>max3){
                max3=num;
            }
        }

        if(max3!=LLONG_MIN)
        {
            return (int)max3;
        }
        return (int) max1;

    }
};