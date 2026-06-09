class Solution {
public:
    int uniquePaths(int m, int n) {
       std::vector<std::vector<int>> vec(m, std::vector<int>(n, 0));
       if(m==0 || n==0)
       {
        return 1;
       }
       for(int i=0; i<m; i++)
       {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0)
          {
            vec[i][j]=1;
          }
          else{
            vec[i][j]=vec[i-1][j]+vec[i][j-1];
          }
        }

       }
      return vec[m-1][n-1];  
    }
};