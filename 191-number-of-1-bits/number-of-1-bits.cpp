class Solution {
public:
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