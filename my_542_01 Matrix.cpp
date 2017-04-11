class Solution {
    vector<int> dr{1, -1, 0, 0};
    vector<int> dc{0, 0, -1, 1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        vector<vector<int>> res(M, vector<int>(N,-1));
        queue<pair<int,int>> imp;
        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                if(matrix[i][j] == 0){
                    imp.emplace(i,j);
                    res[i][j] = 0;
                }
        for(;!imp.empty();imp.pop()){
            auto q = imp.front();
            int row = q.first;
            int col = q.second;
            for(int k = 0; k < 4; k++){
                int newRow = row + dr[k];
                int newCol = col + dc[k];
                if(isValid(M,N,newRow,newCol) && res[newRow][newCol] == -1){
                    res[newRow][newCol] = res[row][col] + 1;
                    imp.emplace(newRow,newCol);
                }
            }
        }
        return res;
    }
    bool isValid(int M, int N, int m, int n){
        return (m >= 0 && m < M && n >= 0 && n < N);
    }
};
