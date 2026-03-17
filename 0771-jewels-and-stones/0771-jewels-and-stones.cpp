class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum=0;
        unordered_set<char>sa;
        for(char num: jewels){
            sa.insert(num);
        }
        for(char stone: stones)
        {
            if(sa.count(stone))
            sum++;
        }
     return sum;   
    }
};