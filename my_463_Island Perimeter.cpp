class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.size() == 0)
            return 0;
        int c = grid[0].size();
        int g = grid.size();
        int s,x,z,y;
        int res = 0;
        for (int i = 0; i < g; i++)
            for (int j = 0; j < c; j++) {
                int cur = 0;
                if (grid[i][j] == 1){
                    s = (i!= 0 ? grid[i-1][j]:0);
                    x = (i!= g-1? grid[i+1][j]:0);
                    z = (j!= 0? grid[i][j-1]:0);
                    y = (j!= c-1? grid[i][j+1]:0);
                    cur = 4-(s + x + y + z);
                    res += cur;
            }
    }
    return res;
    }
};
