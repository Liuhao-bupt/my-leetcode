#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int qiuhe(int num) {
	vector<int> v1;
	int result = 0;
	while (num) {
		v1.push_back(num % 10);
		num /= 10;
	}
	for (auto it : v1)
		result += (it * it);
	return result;
}


void guochen(int num) {
	int slow = qiuhe(num);
	int fast = qiuhe(slow);
	while (slow != fast) {
		cout << slow << endl;
		slow = qiuhe(slow);
		fast = qiuhe(qiuhe(fast));
	}
}

int main()
{
	int a;
	cin >> a;
	guochen(a);
	return 0;
}
