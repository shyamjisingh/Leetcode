class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n= candies.size();
        int max=*max_element(candies.begin(),candies.end());

     vector<bool>ans;
        
        for(int p :candies){
            if((p + extraCandies)>=max){
                ans.push_back(true);
            }else{
                 ans.push_back(false);
            }
        }
        return ans;
    }
};