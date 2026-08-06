class Solution {
public:
    int product_digit(int x){
        int ans=1, d=0;
        while(x){
            d=x%10;
            ans*=d;
             x/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        for(int z=n; z<n+10; z++){
            if (product_digit(z)%t==0) return z;
        }
        return 0;
    }
};