class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = potions.size();
        sort(potions.begin(), potions.end());
        
        for(int i = 0; i < spells.size(); i++) {
            int l = 0;
            int r = n - 1;
            int idx = -1;

            while(r >= l) {
                int mid = l + (r - l) / 2;
                if((long long)spells[i] * potions[mid] >= success) {
                    idx = mid;
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            int c;
            if(idx == -1) {
                c = 0;
                ans.push_back(c);
            }
            else {
                c = n - idx;
                ans.push_back(c);
            }
        }
        return ans;
    }
};