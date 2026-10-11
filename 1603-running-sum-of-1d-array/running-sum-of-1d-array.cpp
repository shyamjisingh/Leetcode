class Solution {
public:
    vector<int> runningSum(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> r;
         
           r.push_back(nums[0]);
        for(int i = 1; i < n; i++) {
            
               int sum=  r[r.size()-1] + nums[i];
            r.push_back(sum);
        }
        return r;
    }
};