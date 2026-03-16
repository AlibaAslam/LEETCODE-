class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        if (bulbs.empty()) 
        return {};

        vector<int> vec;
        sort(bulbs.begin(), bulbs.end());
        int count =1;
        for(int i = 1; i < bulbs.size(); i++)
        {
            if(bulbs[i]==bulbs[i-1])
            {
                count++;
            }
            else{
                if(count%2!=0)
                {
                      vec.push_back(bulbs[(i - 1)]);
                }
                count=1;
            }
        }
          if(count%2!=0)
          {
            vec.push_back(bulbs[bulbs.size() - 1]);
          }

        return vec;
    }
};