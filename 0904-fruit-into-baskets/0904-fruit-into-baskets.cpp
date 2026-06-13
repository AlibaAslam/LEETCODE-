class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        vector<int> fr(100001, 0);

        int type = 0;
        int ans = 0;
        int s = 0;

        for (int i = 0; i < fruits.size(); i++) {

            int f = fruits[i];

            if (fr[f] == 0)
                type++;

            fr[f]++;

            while (type > 2) {

                int sf = fruits[s];

                fr[sf]--;

                if (fr[sf] == 0)
                    type--;

                s++;
            }

            int pick = i - s + 1;

            ans = max(ans, pick);
        }

        return ans;
    }
};