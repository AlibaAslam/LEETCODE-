class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        for(string i : operations)
        {
            if((i=="X--")||(i=="--X"))
            count--;

            else if((i=="X++")||(i=="++X"))
            count++;
        }
        return count;
       
    }
};