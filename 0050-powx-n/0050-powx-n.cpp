class Solution {
public:
    double myPow(double x, int n) {
         return pow(x, n);
    }
    
    double pow(double x, long long n) {
        if (n == 0) return 1.0;
        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }
        
        double halfpow = pow(x, n / 2);
        double halfpowsquare = halfpow * halfpow;
        
        if (n % 2 != 0) {
            return x * halfpowsquare;
        }

        return halfpowsquare;
    }
};