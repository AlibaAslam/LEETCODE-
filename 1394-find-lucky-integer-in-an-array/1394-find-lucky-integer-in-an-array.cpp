class Solution {
public:
    int findLucky(vector<int>& arr) {
      vector<int>freq(501,0);
      int maxm=-1;
     
      for(int i: arr)
      {
        if(i <= 500)// to ensure that it should be under constraint and value does not exceed from 500 , it should be from 0 to 500 only
        {
          freq[i]++;
        }
      }
      for(int i=1; i<=freq.size()-1; i++)
      {
        if(freq[i]==i)
        {
           int ans=freq[i];
             maxm=max(maxm,ans);
        }
     }
      
      return maxm;
    }
};


// class Solution {
// public:
//     int findLucky(vector<int>& arr) {
//       vector<int>freq(501,0);
//       int maxm=-1;
//      
//       for(int i: arr)
//       {
//         freq[i]++;
//       }
//       for(int i=0; i<=freq.size()-1; i++)
//       {
//         if(freq[i]==i )
//         {
//            int ans=freq[i];
//              maxm=max(maxm,ans);
//         }
//        
//         
//      }
//         
//       
//       return maxm;
//         
//     }
// };