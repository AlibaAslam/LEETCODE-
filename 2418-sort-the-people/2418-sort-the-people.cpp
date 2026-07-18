class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n= names.size();
        for(int i=0; i<=n-1; i++)
        {
           for(int j=i+1; j<=n-1; j++)
           {
            if(heights[i]<heights[j])
            {
                int temp=heights[i];
                heights[i]=heights[j];
                heights[j]=temp; 

                string t=names[i];
                names[i]=names[j];
                names[j]=t;    
            }

           }

        }
        return names;
     
    }
};