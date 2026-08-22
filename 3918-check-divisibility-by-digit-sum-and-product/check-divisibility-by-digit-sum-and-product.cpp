class Solution {
public:
    bool checkDivisibility(int n) {

        int product=1;
        int sum =0;
        int i=0;
        int digit =n;

        while(i<n)
        {
            product*=n%10;
            sum+=n%10;

            n=n/10;

        }

     return    digit%(sum+product)==0;
    }
};