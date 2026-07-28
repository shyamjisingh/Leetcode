class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
         int count =0;
         for(int i=0;i<=n;i++){
             ans[i]=hammingWeight(i);
        }
        
        return ans;
    }
    int hammingWeight(int n) {

       // int n1=1;
        int count =0;
        while(n>=1){
            if(n&1){
                 count++;
            }
           
            n=n>>1;
        }
        return count;
        
    }
};