#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>
#include<cmath>
#include<time.h>

using namespace std;
int Sol(vector<vector<int>> &, vector<vector<int>>&);

int main() {
	clock_t start, finish;
	double totaltime;
	start = clock();
	vector<vector<int>> grid(100, vector<int>(100));
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			grid[i][j] = i + j;
	if (grid.empty())
		return 0;
	int m = grid.size();
	int n = grid[0].size();
	vector<vector<int>> cache(m + 1, vector<int>(n + 1, -1));
	int res = Sol(grid, cache);
	cout << res << endl;
	finish = clock();
	totaltime = (double)(finish - start);
	cout << totaltime << endl;
	return 0;
}
int Sol(vector<vector<int>> &grid, vector<vector<int>>& cache) {
	int m = grid.size();
	int n = grid[0].size();
	if (cache[m][n] != -1)
		return cache[m][n];
	if (m == 1 || n == 1) {
		int sum = 0;
		for (auto c : grid)
			sum += accumulate(c.begin(), c.end(), 0);
		cache[m][n] = sum;
		return sum;
	}
	vector<vector<int>> gridr, gridd;
	gridr = gridd = grid;
	gridd.erase(gridd.begin());
	for (auto &c : gridr)
		c.erase(c.begin());
	cache[m][n] = grid[0][0] + min(Sol(gridr, cache), Sol(gridd, cache));
	return cache[m][n];
}


int minPathSum(vector<vector<int>>&);
int main() {
	clock_t start, finish;
	double totaltime;
	start = clock();
	vector<vector<int>> grid(10, vector<int>(10));
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			grid[i][j] = i + j;
	int res = minPathSum(grid);
	cout << res << endl;
	finish = clock();
	totaltime = (double)(finish - start);
	cout << totaltime << endl;
	return 0;
}


int minPathSum(vector<vector<int>>& grid) {
	if (grid.empty())
		return 0;
	if (grid.size() == 1 || grid[0].size() == 1) {
		int sum = 0;
		for (auto c : grid)
			sum += accumulate(c.begin(), c.end(), 0);
		return sum;
	}
	int result = 0;
	vector<vector<int>> gridr, gridd;
	gridr = gridd = grid;
	gridd.erase(gridd.begin());
	for (auto &c : gridr)
		c.erase(c.begin());
	result = grid[0][0] + min(minPathSum(gridr), minPathSum(gridd));
	return result;
}



int main() {
	clock_t start, finish;
	double totaltime;
	start = clock();
	vector<vector<int>> grid(100, vector<int>(100));
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			grid[i][j] = i + j;
	if (grid.empty())
		return 0;
	int m = grid.size();
	int n = grid[0].size();
	vector<vector<int>> vec(m, vector<int>(n, grid[0][0]));
	for (int i = 1; i < m; ++i)
		vec[i][0] = vec[i - 1][0] + grid[i][0];
	for (int j = 1; j < n; ++j)
		vec[0][j] = vec[0][j - 1] + grid[0][j];
	for (int i = 1; i < m; ++i) {
		for (int j = 1; j < n; ++j)
			vec[i][j] = grid[i][j] + min(vec[i - 1][j], vec[i][j - 1]);
		}
	cout << vec[m - 1][n - 1] << endl;
	finish = clock();
	totaltime = (double)(finish - start);
	cout << totaltime << endl;
	return 0;
}
