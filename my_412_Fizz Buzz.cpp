class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> res;
		for (int i = 1; i <= n; i++)
			res.push_back(to_string(i));
		int t = 3;
		int f = 5;
		int fi = 15;
		while (t <= n) {
			res[t-1] = "Fizz";
			t += 3;
		}
		while (f <= n) {
			res[f-1] = "Buzz";
			f += 5;
		}
		while (fi <= n) {
			res[fi-1] = "FizzBuzz";
			fi += 15;
		}
		return res;
	}
};
