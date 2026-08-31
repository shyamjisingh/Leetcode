class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int curr =0;
        int count =0;
        for(int i=0;i<nums.size();i++){
             curr += nums[i];
             int temp =curr-k;
             if(m.find(temp)!=m.end()){
                count+=m[temp];
             }
             m[curr]++;
        }
        return count;
    }
};