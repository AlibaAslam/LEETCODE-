class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;

        for(int i=0; i<=int(nums.size())-1; i++)
        {
            ans.push_back(to_string(nums[i]));
        }
        
        sort(ans.begin(), ans.end(), [](const string& a, const string& b){ return a+b > b+a; });

        if(ans[0] == "0")
            return "0";
            
        string result = "";
        for(string i : ans)
        {
            result += i;
        }
        return result;
    }
};