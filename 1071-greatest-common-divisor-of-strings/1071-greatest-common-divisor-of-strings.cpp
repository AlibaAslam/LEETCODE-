class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s= str1+str2;
        string t= str2+ str1;
        int n1= str1.size();
        int n2=str2.size();
        string ans="";
        if(s!=t)
        return ans;
       int l= calculateGCD(n1,  n2) ;
       for(int i=0; i<l;i++){
        ans=ans+str1[i];

       }
     return ans;
        

    }
    

   int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
};