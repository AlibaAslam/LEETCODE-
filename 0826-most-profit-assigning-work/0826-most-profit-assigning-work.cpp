class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        // sort workers array first
        sort(w.begin(), w.end());


        for(int i=0; i<=d.size()-1; i++)
        {
            for(int j=i+1; j<d.size(); j++)
            {
                if(d[i]>d[j])
                {
                    //sort difficulties value
                    int temp = d[i];
                    d[i]=d[j];
                    d[j]=temp;
                    //sort profit values
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }

                
            }

        }

        int max=p[0];

        // now updating the maximum values of profit array
        for(int i=0; i<=p.size()-1; i++)
        {
            if(max>=p[i])
            {
                p[i]=max;
            }
            else{
                max=p[i];
            }

        }
        int ans=0;
        for(int i= w.size()-1; i>=0; i--)
        {
            int check=ans;
            for(int j=d.size()-1; j>=0; j--)
            {
                if(w[i]>=d[j])
                {
                    ans+=p[j];
                    break;

                }


            }

            if(check==ans)
            break;
        }
        return ans;
    }
};