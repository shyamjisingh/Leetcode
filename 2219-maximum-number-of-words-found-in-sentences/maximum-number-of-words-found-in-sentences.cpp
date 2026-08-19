class Solution {
public:
    int mostWordsFound(vector<string>& strs) {
        int n = strs.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            string temp = strs[i];
            for(char c : temp){
                if(c == ' ') count++;
            }
            ans = max(ans, count+1);
        }
        return ans;
    }
};