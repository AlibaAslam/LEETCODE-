class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int n1= nums1.size();
       int n2=nums2.size();
    int p=0;
    int q=0;
       while(p<n1 && q<n2)
       {
         if(nums1[p]==nums2[q])
          return nums1[p];
          if(nums1[p]>nums2[q])
            q++;
        else   if(nums1[p]<nums2[q])
         p++;

        
        
       }
      
      return -1;
        
    }
};