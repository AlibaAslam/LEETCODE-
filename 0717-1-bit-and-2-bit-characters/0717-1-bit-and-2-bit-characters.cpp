class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool flag= true;
        for(int i=0; i<bits.size();)
        {
            if(bits[i]==1)
            {
                flag=false;
                i=i+2;
            }
            else
            {
                flag= true;
                i=i+1;
            }
        }
        return flag;
    }
};