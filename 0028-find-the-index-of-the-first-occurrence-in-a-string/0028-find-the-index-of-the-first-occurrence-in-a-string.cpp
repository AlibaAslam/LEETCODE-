class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2= needle.size();
        int p=0;
        int q=0;
        while(p<n1)
        {
            if(haystack[p]==needle[q])
            {
                p++;
                q++;

            }

            else{
               
                p=p-(q-1);
                 q=0;
            }

        if(q==n2)
        {
            return p-q; 
        }
        }  

        return -1;      
    }
};