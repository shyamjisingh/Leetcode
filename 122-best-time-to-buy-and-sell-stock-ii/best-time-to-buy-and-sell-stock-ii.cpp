class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int profit=0,buy=prices[0];
        int n = prices.size();

          for(int i=1;i<n;i++){

            if(prices[i]<buy){
                buy=prices[i];
            }if(prices[i]>prices[i-1]){
               int currentprofit=prices[i]-buy;
                profit=profit+currentprofit;
                buy=prices[i];
            }
          }
          return profit; 
        
    }
};