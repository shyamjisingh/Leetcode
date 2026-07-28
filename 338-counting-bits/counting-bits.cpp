class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
         int count =0;
         for(int i=0;i<=n;i++){
            count=0;
            int val=i;
        while(val>0){
            if(val&1){
                 count++;
            }
           
            val=val>>1;
        }
        ans.push_back(count);
        }
        return ans;
    }
};