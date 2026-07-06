class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i: arr)
        {
            if(freq.find(i)!=freq.end())
            freq[i]++;
            else
            freq[i]=1;
        }
       unordered_set<int> mySet;
       for(auto i : freq)
       {
        if(mySet.count(i.second))
        return false;

        mySet.insert(i.second);
       }
       return true;
    }
};