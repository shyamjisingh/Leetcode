class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        //  long long sum =0;
        //  unordered_map<int, int> mp;
        //  for(int i=0; i<k-1;i++){

        //    sum+=nums[i];
        //    mp[nums[i]]++;
        //  }

        //  int i=0;
        //  int j=k-2;
        //  int n= nums.size();
        //  long long ans =0;
        //  while(j<n){
        //     j++;
        //      sum= sum+nums[j];
        //      mp[nums[j]]++;
        //      if(mp.size() == k) {
        //         ans = max(ans, sum);
        //     }
        //     sum = sum - nums[i];
        //     mp[nums[i]]--;
        //     if(mp[nums[i]] == 0) {
        //         mp.erase(nums[i]);
        //     }
        //     i++;
        //  }
        //  return ans;


        int n = nums.size();
        if (n < k) {
            return 0; 
        }

        long long sum = 0;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < k - 1; i++) {
            sum += nums[i];
            mp[nums[i]]++;
        }

        int i = 0;
        int j = k - 2;
        long long ans = 0; 
        
        while(j < n - 1) { 
            j++;
            sum = sum + nums[j];
            mp[nums[j]]++;
            
            if(mp.size() == k) {
                ans = max(ans, sum);
            }
            
            sum = sum - nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) {
                mp.erase(nums[i]);
            }
            i++;
        }
        
        return ans;



    }
};