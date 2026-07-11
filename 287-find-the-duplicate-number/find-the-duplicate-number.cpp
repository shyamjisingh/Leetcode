class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int ans=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         ans =nums[i];
        //         break;
        //     }
        // }

        // return ans;



        for(int i=0;i<nums.size();i++){
            int index =abs(nums[i]);
              if(nums[index]<0){
                return index;
              } 
           
            nums[index]=-(nums[index]);

               }

               return nums.size();
    }
};