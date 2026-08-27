class Solution {
public:
   string frequencySort(string s) {
       
        vector<int> freq(128, 0);
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        
        string p;
        while (true) {
            int maxFreq = 0;
            int bestChar = -1;
            for (int i = 0; i < 128; i++) {
                if (freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    bestChar = i;
                }
            }
     
            if (maxFreq == 0) {
                break;
            }
            
            while (freq[bestChar] > 0) {
                p.push_back(bestChar);
                freq[bestChar]--;
            }
        }
        
        return p;
    }
};