class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        int third= 0;
        for(int number : nums) {
            if(number <= first) {
                first = number; 
            } else if(number <= second) {
                second = number;
            } else {
               third =number;
            }

            if(first<second&&second<third){
                return true;
                break;
            }
        }
        return false;  
    }
};