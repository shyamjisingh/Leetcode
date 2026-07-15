class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        
       
        vector<bool> visited(n, false); 

        for(int i = 0; i < n; i++) {
           
            if(visited[i]) {
                continue;
            }
            
            vector<string> tempe;
            tempe.push_back(strs[i]);
            visited[i] = true; 
            
            string s = strs[i];
            sort(s.begin(), s.end()); 
            
            for(int j = i + 1; j < n; j++) {
                if(visited[j]) continue;
                
                if(strs[i].size() != strs[j].size()) continue;
                
                string t = strs[j];
                sort(t.begin(), t.end());
                
                
                if(s == t) {
                    tempe.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(tempe);
        }
        return ans;
    }
};