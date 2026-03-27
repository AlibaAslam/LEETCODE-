class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        long s1=0;
        long s2=0;
        long maxsum=0;
        int MOD= 1e9+7;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
      while((i < n1) && (j < n2))
      {
        if(nums1[i]<nums2[j])
        {
            s1 += nums1[i];
            i++;
        }
        else if(nums2[j]<nums1[i])
        {
            s2 += nums2[j];
            j++;

        }
        else {
            maxsum += max(s1,s2) + nums1[i];
            i++;
            j++;
            s1=0;
            s2=0;
        }
      }
      // to check if nums1 is still left to traverse or completed
      while(i < n1)
      {
        s1 += nums1[i];
        i++;
      }
      // to check if nums2 is still left to traverse or completed
        while(j < n2)
      {
        s2 += nums2[j];
        j++;
      }
      maxsum += max(s1,s2);
      return (int)(maxsum % MOD);

      }
};