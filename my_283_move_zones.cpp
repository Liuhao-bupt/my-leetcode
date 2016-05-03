#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v = { 0,1,0,3,12 };
	for (auto it = v.begin(); it != v.end(); it++) {
		if (*it == 0)
			for (auto it2 = it + 1; it2 != v.end(); it2++)
				if (*it2!=0) {
					auto temp = *(it2);
					*(it2) = *(it);
					*it = temp;
					break;
				}
		}
	for (auto c : v)
		cout << c << " ";
	cout << endl;
	return 0;
}
