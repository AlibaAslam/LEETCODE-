class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zero = 0;
        int one = 0;
        int two = 0;

        for (int i : stones) {
            if (i % 3 == 0)
                zero++;
            else if (i % 3 == 1)
                one++;
            else
                two++;
        }

        if (one == 0 && two == 0)
            return false;

        bool ans1 = false;
        bool ans2 = false;

        if (one > 0) {
            int z = zero;
            int o = one - 1;
            int t = two;
            int remander_sum = 1;
            int chance = 1;

            while (o > 0 || t > 0 || z > 0) {
                if (z > 0) {
                    z--;
                } else if (remander_sum % 3 == 1) {
                    if (o > 0) {
                        remander_sum += 1;
                        o--;
                    } else {
                        break;
                    }
                } else {
                    if (t > 0) {
                        remander_sum += 2;
                        t--;
                    } else {
                        break;
                    }
                }

                chance++;
            }

            ans1 = (chance % 2 == 1) && (o > 0 || t > 0);
        }

        if (two > 0) {
            int z = zero;
            int o = one;
            int t = two - 1;
            int remander_sum = 2;
            int chance = 1;

            while (o > 0 || t > 0 || z > 0) {
                if (z > 0) {
                    z--;
                } else if (remander_sum % 3 == 2) {
                    if (t > 0) {
                        remander_sum += 2;
                        t--;
                    } else {
                        break;
                    }
                } else {
                    if (o > 0) {
                        remander_sum += 1;
                        o--;
                    } else {
                        break;
                    }
                }

                chance++;
            }

            ans2 = (chance % 2 == 1) && (o > 0 || t > 0);
        }

        return ans1 || ans2;
    }
};