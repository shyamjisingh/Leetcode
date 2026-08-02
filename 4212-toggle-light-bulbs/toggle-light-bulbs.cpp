class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        
         unordered_map<int,int> m;

        for (int i : bulbs) {
            m[i]++;
        }
       vector<int> ans;
       for (auto i : m) {
            if (i.second % 2)
                ans.push_back(i.first);
        }

        sort(ans.begin(), ans.end());
        return ans;


    }
};