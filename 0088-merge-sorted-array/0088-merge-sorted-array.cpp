class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=nums1.size()-1;
        if(m==0)
        {
            for(int i=0 ;i<=k;i++)
            {
                nums1[i]=nums2[i];
            }
        }
        m=m-1;
        n=n-1;
        
        while(n>=0 && m>=0)
        {
            if(nums1[m]>nums2[n])
            {
                nums1[k--]=nums1[m--];
            }
            else{
                nums1[k--]=nums2[n--];

            }
        }
        for(; n>=0;n--)
        {
            nums1[k--]=nums2[n];
            
        }
        
    }
};