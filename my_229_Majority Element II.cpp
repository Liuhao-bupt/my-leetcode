class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int64_t a = INT64_MAX, b = INT64_MAX, cnta = 0, cntb = 0;
        for (int num : nums) {
            if (a == num)
                cnta++;
            else if (b == num)
                cntb++;
            else if (cnta == 0){
                a = num;
                cnta = 1;}
            else if (cntb == 0){
                b = num;
                cntb = 1;}
            else if (a != num  || b != num){
                cnta--;
                cntb--;
                if (cnta == 0)
                    a = INT64_MAX;
                if (cntb == 0)
                    b = INT64_MAX;
            }
        }
        vector<int> temp;
        if (count(nums.begin(), nums.end(), a) > nums.size()/3)
            temp.push_back(a);
        if (count(nums.begin(), nums.end(), b) > nums.size()/3)
            temp.push_back(b);
        return temp;
    }
};
