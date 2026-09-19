class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i) { 
        if (digits[i] == 9) {  
          digits[i] = 0;
        } else {  
          digits[i] += 1;
          return digits;
        }
      }
      // if the program runs to this point, each 9 is now a 0.
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};