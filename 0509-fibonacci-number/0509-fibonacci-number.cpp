class Solution {
public:
    int fib(int n) {
         return func(n);
      
    }
       int func(int n)
      {
         if(n<=1)
       return n; 
       return(fib(n-2)+fib(n-1));
      }
        
};