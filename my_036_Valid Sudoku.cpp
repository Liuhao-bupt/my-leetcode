class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++i)
        {
            vector<int> cur(9,0);
            for(int j = 0; j < 9; ++j)
            {
                if(board[i][j] >= '1' && board[i][j] <= '9')
                {
                    ++cur[board[i][j]-'1'];
                    if(cur[board[i][j]-'1'] > 1)
                        return false;
                }
            }
        }
        for(int i = 0; i < 9; ++i)
        {
            vector<int> cur(9,0);
            for(int j = 0; j < 9; ++j)
            {
                if(board[j][i] >= '1' && board[j][i] <= '9')
                {
                    ++cur[board[j][i]-'1'];
                    if(cur[board[j][i]-'1'] > 1)
                        return false;
                }
            }
        }
        for(int k = 0; k < 9; k = k + 3)
        {
            for(int t = 0; t < 9; t = t + 3)
            {
                vector<int> cur(9,0);
                for(int i = k; i < k+3; ++i)
                {
                    for(int j = t; j < t+3; ++j)
                    {
                        if(board[i][j] >= '1' && board[i][j] <= '9')
                        {
                        ++cur[board[i][j]-'1'];
                        if(cur[board[i][j]-'1'] > 1)
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
