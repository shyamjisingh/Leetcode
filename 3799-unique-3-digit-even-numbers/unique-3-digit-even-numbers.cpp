class Solution {
public:
    int totalNumbers(vector<int>& digits) {
      vector<int> count(10, 0);
        for(int i : digits) {
            count[i]++;
        }

        int totalNumbers = 0;

        for(int h = 1; h <= 9; h++) {
            for(int t = 0; t <= 9; t++) {
                for(int u = 0; u <= 8; u += 2) {
                    count[h]--;
                    count[t]--;
                    count[u]--;

                    if(count[h] >= 0 && count[t] >= 0 && count[u] >= 0) {
                        totalNumbers++;
                    }

                    count[h]++;
                    count[t]++;
                    count[u]++;
                }
            }
        }
        
        return totalNumbers;
         
    }
};