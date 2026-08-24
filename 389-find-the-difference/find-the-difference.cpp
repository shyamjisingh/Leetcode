class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int>mp;
        for(char c : s) mp[c]++;
        for(char c : t) mp[c]--;
        for(auto& i : mp){
            if(i.second < 0) return i.first;
        }
        return 'a';
    }
};