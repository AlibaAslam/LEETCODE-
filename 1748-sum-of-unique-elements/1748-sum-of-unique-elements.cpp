class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums)
        {
            if(freq.count(i))
            {
                freq[i]++;
            }

            else
            {

                freq[i]=1;
            }
 
        }
        int sum=0;
        for(int i=0; i<=freq.size()-1; i++)
        {
            if(freq[i]==1)
            {
                sum+=i;
            }

        }

        return sum;
    }
};