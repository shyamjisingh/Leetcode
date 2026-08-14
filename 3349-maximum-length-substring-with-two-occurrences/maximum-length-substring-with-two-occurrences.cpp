class Solution {
public:
    int maximumLengthSubstring(string s) {
          
           int i=0;
           int j=0;
           int n = s.size();
         
vector<int> freq(128, 0);
         int res =0;
        while(i<n){
            freq[s[i]]++;
            while(freq[s[i]] > 2){
                freq[s[j]]--;
                j++;
            }
            res = max(res, i-j+1);
            i++;
        }
        return res;
    }
};
         
   