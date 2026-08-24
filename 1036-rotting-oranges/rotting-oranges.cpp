class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    queue<pair<int,int>> q;
    int fresh = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(grid[i][j] == 2)
                q.push({i,j});
            else if(grid[i][j] == 1)
                fresh++;
        }
    }

    int minutes = 0;

    while(!q.empty() && fresh > 0) {
        int n = q.size();

        while(n--) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x > 0 && grid[x-1][y] == 1) {
                grid[x-1][y] = 2;
                fresh--;
                q.push({x-1,y});
            }

            if(x < rows-1 && grid[x+1][y] == 1) {
                grid[x+1][y] = 2;
                fresh--;
                q.push({x+1,y});
            }

            if(y > 0 && grid[x][y-1] == 1) {
                grid[x][y-1] = 2;
                fresh--;
                q.push({x,y-1});
            }

            if(y < cols-1 && grid[x][y+1] == 1) {
                grid[x][y+1] = 2;
                fresh--;
                q.push({x,y+1});
            }
        }

        minutes++;
    }

    if(fresh == 0)
        return minutes;

    return -1;
}
};