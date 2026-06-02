class Solution {
public:
    string addBinary(string a, string b) {
       int A= a.length()-1;
       int B= b.length()-1;
       int carry=0;
       int sum=0; 
       string ans="";
       while(A>=0 || B>=0|| carry>0)
       {
        sum=carry;
        if(A>=0)
        {
        sum= sum + a[A]-'0';
        A--;
        }

        if(B>=0)
        {
            sum=sum + b[B]-'0';
          B--;
        }
        
        ans= char(sum%2+'0') +ans;
        carry=sum/2;
       }
       return ans;   
    }

};