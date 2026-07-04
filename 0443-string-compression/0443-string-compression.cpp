class Solution {
public:
    int compress(vector<char>& chars) {
    int i=0;
    int n= chars.size();
    string s="";
    while(i<n)
    {
        char ch= chars[i];
        int count=0;
        while(i<n && chars[i]==ch){
            count++;
            i++;
        }

        s=s+ch;
        if(count>1)
        s=s+to_string(count);
      
        
    }
      int ans=s.size();
        for(int k=0; k<=ans-1; k++){
            chars[k]=s[k];
        }
    return ans;
    
    }
};