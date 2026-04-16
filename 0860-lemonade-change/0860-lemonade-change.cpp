class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int note_five=0;
        int note_ten=0;
        if(bills[0]!=5)
            return false;
        for(int i : bills)
        {
            if(i==5)
            note_five ++;
            else if(i==10)
            {
                if(note_five >0)
                {
                    note_five--;
                    note_ten++;
                }
                else
                return false;
                
            }
            // for bill[i]=20
            else{
                if(note_five>0 && note_ten>0)
                {
                    note_ten--;
                    note_five--;
                }
                else if(note_five>=3)
                {
                    note_five=note_five-3;
                }
                else
                return false;
                
            }
        }
    return true;
        
    }
};