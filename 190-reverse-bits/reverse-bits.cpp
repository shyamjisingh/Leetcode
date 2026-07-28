class Solution {
public:
    int reverseBits(int n) {
        long long rev=0;

         for(int i=1;i<=32;i++)
        {
            if(n&1==1)
            {
                rev+=pow(2,(32-i));
            }
            n=n>>1;
        }
        return int(rev);
    }
};