class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       unordered_map<int, int> freq;
        for (int x : nums) freq[x]++; // Sabki frequency count kar li
        
        int ans = -1;
        int n = nums.size();
        
        if (k == n) {
            // Case 1: Sabse bada frame
            for (int x : nums) ans = max(ans, x);
        } 
        else if (k == 1) {
            // Case 2: Sabse chota frame
            for (int x : nums) {
                if (freq[x] == 1) ans = max(ans, x);
            }
        } 
        else {
            // Case 3: Middle frame (1 < k < n)
            if (freq[nums[0]] == 1) ans = max(ans, nums[0]);
            if (freq[nums[n - 1]] == 1) ans = max(ans, nums[n - 1]);
        }
        
        return ans;
    }
};