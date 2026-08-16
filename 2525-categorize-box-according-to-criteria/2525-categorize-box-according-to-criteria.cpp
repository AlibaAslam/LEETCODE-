class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long volume = 1LL * l * w * h;
        bool bulky = false;
        bool heavy = false;

        if (volume >= 1000000000 || l >= 10000 || w >= 10000 || h >= 10000)
            bulky = true;

        if (m >= 100)
            heavy = true;

        if (bulky && heavy)
            return "Both";
        else if (bulky)
            return "Bulky";
        else if (heavy)
            return "Heavy";
        else
            return "Neither";
    }
};