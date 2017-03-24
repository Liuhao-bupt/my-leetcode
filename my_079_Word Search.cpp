class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int M = board.size();
        if ( M == 0 || word.size() == 0)
            return false;
        int N = board[0].size();
        for (int m = 0; m < M; ++m)
            for (int n = 0; n < N; ++n)
                if (dfs(board, word,m,n,0,M,N))
                    return true;
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word, int m, int n, int start,int M, int N){
        char cur = board[m][n];
        bool res = false;
        if (cur != word[start])
            return false;
        if (start == word.size() - 1)
            return true;
        board[m][n] = '*';
        if (!res && m > 0)
            res = dfs(board, word, m - 1, n, start + 1, M, N);
        if (!res && m < M-1)
            res = dfs(board, word, m + 1, n, start + 1, M, N);
        if (!res && n > 0)
            res = dfs(board, word, m, n - 1, start + 1, M, N);
        if (!res && n < N-1)
            res = dfs(board, word, m, n + 1, start + 1, M, N);
        board[m][n] = cur;
        return res;
    }
};
