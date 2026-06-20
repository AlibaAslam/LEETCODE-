class Solution {
public:
    string reverseVowels(string s) {
        int sz=s.size();
        vector<int>ans;
        int i=0;
        for (int j=0; j<sz; j++){
          if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
    s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') {
        
        ans.push_back(j);
        i++;
           }
        }
        for(int k=0; k<(i/2);k++)
        {
            swap(s[ans[k]],s[ans[i-1-k]]);

        }
        

        return s;

    }
};