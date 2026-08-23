class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> count(100005, 0); 
        int left = 0;
        int maxfruits = 0;
        int uniquetypes = 0; 
        
        for (int right = 0; right < fruits.size(); ++right) {
            if (count[fruits[right]] == 0) {
                uniquetypes++;
            }
            count[fruits[right]]++;
            
            while (uniquetypes > 2) {
                count[fruits[left]]--;
                
                if (count[fruits[left]] == 0) {
                    uniquetypes--;
                }
                left++;
            }
            
            maxfruits = max(maxfruits, right - left + 1);
        }
        
        return maxfruits;
    }
};