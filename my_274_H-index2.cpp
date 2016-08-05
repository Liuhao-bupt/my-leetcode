class Solution {
public:
    int hIndex(vector<int>& citations) {
        map<int, int> count;
        sort(citations.begin(), citations.end());
	    int s = citations.size();
	    count[0] = s;
	    int i = 0, j = 1;
	    while (i < s && j <= s) {
		if (citations[i] >= j) {
			count[j] = s - i;
			if (count[j] < j)
				break;
			++j;
		}
		else
			++i;
	}
	return j - 1;
    }
};
