class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int ans;
        // unordered_map<int,int>up;
        // for(int i=0;i<n;i++){
        //     up[nums[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(up[nums[i]]>n/2){
        //       ans=nums[i];
        //     }
        // }
        // return ans;
   // without map ------------>

           int candidate = 0;
        int count = 0;

        for (int num : nums) {

            if (count == 0) {
                candidate = num;
            }

            if (candidate == num) {
                count++;
            }
            else {
                count--;
            }
        }

        return candidate;

    
    }
};