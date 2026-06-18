class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> ans;
        vector<int> arr(temp.size(), 0);
        for(int i = 0; i < temp.size(); i++)
        {
            while(!ans.empty() && temp[ans.top()] < temp[i]){
                int a = ans.top();
                ans.pop();
                arr[a] = i - a;
            }
            ans.push(i);
        }
        return arr;
    }
};