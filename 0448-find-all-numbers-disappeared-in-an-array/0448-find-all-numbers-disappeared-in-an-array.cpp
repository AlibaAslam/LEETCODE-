class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec(nums.size(), 0);
        vector<int>vec1 ;
        for(int i : nums)
            vec[i-1]++;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]==0)
            {
                vec1.push_back(i+1);
            }
        }

        return vec1;
    }
};