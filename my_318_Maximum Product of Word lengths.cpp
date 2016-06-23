class Solution {
public:
    int maxProduct(vector<string>& words) {
        int len = words.size();
        int resmax = 0;
        int *nums = new int[len];
        for (int j = 0; j < len; ++j) {
            int k = 0;
            for (int i = 0; i < words[j].size(); ++i) {
                 k |= (1 << (words[j][i] - 'a'));
            }
            nums[j] = k;
        }
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                if ((nums[i] & nums[j]) == 0) {
                    int curmax = words[i].size() * words[j].size();
                    resmax = (resmax > curmax ? resmax : curmax);
                }
            }
        }
        return resmax;
    }
};
