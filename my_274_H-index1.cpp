class Solution {
public:
    int hIndex(vector<int>& citations) {
        map<int, int> count;
	    int s = citations.size();
	    for (int i = 0; i < s; ++i)
		    for (int j = 0; j <= s; ++j)
			    if (citations[i] >= j)
				    ++count[j];
	    int i = 0;
	    for (; i <= s; ++i)
		    if (count[i] < i)
			    break;
	    return i - 1;
    }
};
