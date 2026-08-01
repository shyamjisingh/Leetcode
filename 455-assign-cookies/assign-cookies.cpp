class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans =0;
        int j=0;
        for(int i=0;j<s.size()&&i<g.size();j++){
            if(s[j]>=g[i]){
                ans++;
                i++;           }
        }
        return ans;
    }
};