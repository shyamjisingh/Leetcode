class Solution {
public:
    string largestOddNumber(string nums) {
        int size = nums.size();
        for(int i=size-1; i>=0; i--){
            int digit = nums[i]-'0';
            if(digit%2==1) return nums.substr(0, i+1);
        }
        return "";
    }
};