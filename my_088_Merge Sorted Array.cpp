class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n - 1;
        int k = m - 1, t = n - 1;
        for(; t >= 0; --i)
        {
            if(k >= 0 && nums1[k] > nums2[t])
                nums1[i] = nums1[k--];
            else
                nums1[i] = nums2[t--];
        }
        }
};
