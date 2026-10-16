class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//                   unordered_map<int, int> mp;

//     for(int i=0; i<nums.size(); i++){
//         int rem=target-nums[i];
//         if(mp.find(rem)!=mp.end()){
//             return{mp[rem]+1,i+1};
//         }
//         mp[nums[i]]=i;
//     }
//    return {} ;
       
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];

            if(sum==target){
                return{i+1,j+1};
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return {-1,-1};
    }
};