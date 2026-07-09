class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>up;
        for(int i:nums){
            up[i]++;
        }
        for(int i:nums){
           if(up[i]>1){
               return true;
               break;
           }
        }
        return false;
    }
};