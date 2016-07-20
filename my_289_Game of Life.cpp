class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if (!board.empty()){
            int m = board.size();
            int n = board[0].size();
            if (n != 0) {
                vector<vector<int>> temp = board;
                int sum;
                for (int i = 0; i < m; ++i) {
                    for (int j = 0; j < n; ++j) {
                        sum = 0;
                        if (i-1 >= 0 && j-1 >= 0)
                            sum += temp[i-1][j-1];
                        if (i-1 >= 0)
                            sum += temp[i-1][j];
                        if (i-1 >= 0 && j+1 <n)
                            sum += temp[i-1][j+1];
                        if (j-1>=0)
                            sum += temp[i][j-1];
                        if (j+1 < n)
                            sum += temp[i][j+1];
                        if (i+1 < m && j-1>=0)
                            sum += temp[i+1][j-1];
                        if (i+1 < m)
                            sum += temp[i+1][j];
                        if (i+1 < m && j+1 <n)
                            sum += temp[i+1][j+1];
                        if (sum < 2 && board[i][j] == 1)
                            board[i][j] = 0;
                        if ((sum == 2 || sum == 3) && board[i][j] == 1)
                            board[i][j] = 1;
                        if (sum > 3 && board[i][j] == 1)
                            board[i][j] = 0;
                        if (sum == 3 && board[i][j] == 0)
                            board[i][j] = 1;
                    }
                }
            }
        }
    }
};
