class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long total=0;
        for(int i : chalk)
        {
            total+=i;
        }
        k%=total;
        int i=0;
        int n= chalk.size();
        while(true)
        {
            if(k<chalk[i%n])
            {
                break;
            }
            k=k-chalk[i%n];
            i++;
        }
        return i%n;
    }
};