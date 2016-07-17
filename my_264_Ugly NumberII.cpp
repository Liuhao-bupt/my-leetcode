class Solution {
public:
    int nthUglyNumber(int n) {
	vector<int> index(3, 0);
	vector<int> result(n, 1);
	int res = 1;
	for (int i = 1; i < n; ++i) {
		int temp = min(2 * result[index[0]], 3 * result[index[1]]);
		res = min(temp, 5 * result[index[2]]);
		result[i] = res;
		if (res == 2 * result[index[0]])
			++index[0];
		if (res == 3 * result[index[1]])
			++index[1];
		if (res == 5 * result[index[2]])
			++index[2];
	}
	return res;
    }
};
