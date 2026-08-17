class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> arr(128, false);
        int maxLen = 0, l = 0, r = 0;

        while (r < s.size()) {
            if (!arr[s[r]]) {
                arr[s[r]] = true;
                maxLen = max(maxLen, r - l + 1);
                r++;
            } else {
                arr[s[l]] = false;
                l++;
            }
        }
        return maxLen;class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int store[256]={0};
        int l=0;   
        int r=0;    
        int ans=0;
        
        while(r<s.length())   
        {
            store[s[r]]++;    
            while(store[s[r]]>1)    
            { 
                store[s[l]]--; 
                l++;        
            }
            
            ans = max(ans,r-l+1);
            r++;        
        }
        return ans;
    }
};
    }
};