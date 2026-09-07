class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; 

        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c; 
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            
            if(goingDown){
                currentRow+=1;
            }else{
                currentRow-=1;
            }
        }
        string result;
        for (const string& row : rows) {
            result += row;
        }
        return result;
    }
};