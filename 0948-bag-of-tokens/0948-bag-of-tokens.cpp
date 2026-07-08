class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n= tokens.size();
        int score = 0;
        sort(tokens.begin(),tokens.end());
        int maxScore=0;
        int i=0;
        int j=n-1; 
        while(i<=j)
        {
            //Face Up condition
            if(tokens[i]<=power)
            {
                score=score+1; 
                power=power-tokens[i];
                i++;
                maxScore=max(score,maxScore);
            }
            
            //Face down condtion
            else if(score>=1)
            {
                power= power+tokens[j];
                j--;
                score=score-1;
                
            }
            else{
                break;
            }
        }
    return maxScore;
        
    }
};