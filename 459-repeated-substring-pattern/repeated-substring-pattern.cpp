class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
         int n=s.size();
         vector<int>lsp(n,0);
         int i=0,j=1;

         while(j<n){
            if(s[j]==s[i]){
                i++;
                lsp[j]=i;
                j++;
            }else{
                if(i==0){
                    j++;
                }else{
                    i=lsp[i-1];
                }
            }
         }
         int len = lsp[n - 1];

        return len > 0 && n % (n - len) == 0;
    }
};