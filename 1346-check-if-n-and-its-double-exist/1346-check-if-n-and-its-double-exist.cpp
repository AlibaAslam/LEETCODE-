class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       int n= arr.size();
       unordered_set<int>st;
       for(int i : arr)
       {
        if(st.count(2*i))
          return true;
        if(st.count(i/2) && (i%2==0)) 
        return true;

        st.insert(i);
       }
      
        return false;
    }
};