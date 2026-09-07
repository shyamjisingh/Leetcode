class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; // no zigzag needed, just return as-is

        vector<string> rows(numRows); // one bucket per row
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c; // drop the letter into its row's bucket

            // flip direction when we hit the top or bottom row
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            currentRow += goingDown ? 1 : -1; // bounce up or down
        }

        // glue all the row buckets together in order
        string result;
        for (const string& row : rows) {
            result += row;
        }
        return result;
    }
};