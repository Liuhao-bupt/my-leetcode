#include<iostream>
#include<string>

using namespace std;

int romanChartoInt(char ch)
{
	int d = 0;
	switch (ch) {
	case 'I':
		d = 1;
		break;
	case 'V':
		d = 5;
		break;
	case 'X':
		d = 10;
		break;
	case 'L':
		d = 50;
		break;
	case 'C':
		d = 100;
		break;
	case 'D':
		d = 500;
		break;
	case 'M':
		d = 1000;
		break;
	}
	return d;
}

int main()
{
	string s;
	cin >> s;
	if (s.size() == 0) {
		return 0;}
	int result = romanChartoInt(s[0]);
	for (auto i = 1; i < s.size(); i++) {
		int pre = romanChartoInt(s[i - 1]);
		int cur = romanChartoInt(s[i]);
		if (pre < cur)
			result = result - pre + (cur - pre);
		else
			result += cur;
	}
	cout << result << endl;
	return 0;
}
