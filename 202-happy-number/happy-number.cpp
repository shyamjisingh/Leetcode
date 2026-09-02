class Solution {
public:
    bool isHappy(int n) {
        

         while(n>5){
       
               int sum =0;
               
               while(n){

                int rem =n%10;
                int x=rem*rem;
                sum +=x;
                 n=n/10;
               }
               n=sum;
             
         }
        if(n==1){
            return true;
        }
        return false;
    }
};