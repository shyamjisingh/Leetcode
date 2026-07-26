class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);

        vector<int> num;
        for(char ch : s) {
            num.push_back(ch - '0');
        }
        sort(rbegin(num), rend(num));

        return num[0]*num[1];
    }
};