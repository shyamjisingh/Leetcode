class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  
     int maxsum =INT_MIN;
     int subsum =0;

     for(int i : nums){
              
               
         if(subsum<0){
            subsum=i;
         }else{
            subsum+=i;
         }

         maxsum=max(subsum,maxsum);
     }
     return maxsum;
           

    }
};