class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
          int n = nums.size(); 
        int zero = 0; 
        int ans = 0; 
        for(int x: nums) {
            ans ^= x; 
            if(x==0){
               zero++;  
            }
        }
        if(ans != 0) return n; 
        if(zero==n){
            return 0;
        }
        return n-1;
    }
};