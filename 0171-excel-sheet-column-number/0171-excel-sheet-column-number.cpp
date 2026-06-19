class Solution {
public:
    int titleToNumber(string c) {
        int n=c.size();
        int sum=0;
        long long p=0;
      for(int i=n-1; i>=0; i--)
      {
            sum+=(c[i]-'A'+1)*pow(26,p);
            p++;
      }

   return sum;
        
    }
};