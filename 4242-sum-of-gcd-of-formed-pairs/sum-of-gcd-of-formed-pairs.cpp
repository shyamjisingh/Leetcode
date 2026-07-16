class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long ans=0;
        int n = nums.size();
        vector<int>pregcd(n);
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
            pregcd[i] = gcd(nums[i],maxi);
        }
        sort(pregcd.begin(),pregcd.end());
        int i=0;
        int j =n-1;
        while(i<j){
           ans=ans+gcd(pregcd[i],pregcd[j]);
           i++;
           j--;  
        }
        return ans;


        
    }
};