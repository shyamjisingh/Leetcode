class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n=nums.size();
        vector<int>m(n);
      
        vector<int >max;
        
         max.push_back(nums[0]);
        for(int i=1 ;i<n;i++){
            if(nums[i]>max[i-1]){
                max.push_back(nums[i]);
            }  else{
                max.push_back(max[i-1]);}

            
        }
        m[n-1]=nums[n-1];
        for(int i=n-2 ;i>=0;i--){
            if(nums[i]<m[i+1]){
                m[i]=nums[i];
            }  else{
                m[i]=m[i+1];}

            
        }
        int ans= -1;

        for(int i=0;i<n;i++){
            int temp=max[i]-m[i];
           if(temp<=k){
              ans=i;
              break;
           }
        }
        return ans;
        
    }
};