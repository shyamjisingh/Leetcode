class Solution {
public:
void solve(string digits,vector<string> &ans,string output,int i,string map[]){
        if(i>= digits.length()){
            ans.push_back(output);
            return;
        }
        
        int num=digits[i]-'0';
        string a=map[num];
        for(int j=0;j<a.size();j++){
            output.push_back(a[j]);
             solve(digits,ans,output,i+1,map);
        output.pop_back();
        }
       
}
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.size()==0) return ans;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        string output;
        solve(digits,ans,output,i,map);
        return ans;
    }
};