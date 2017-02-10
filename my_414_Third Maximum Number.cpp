class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int64_t first = INT64_MIN;
        int64_t second = INT64_MIN;
        int64_t third = INT64_MIN;
        for (int num : nums){
            if (num > first) {
                third = second;
                second = first;
                first = num;
            }
            else if (num < first) {
                if (num > second) {
                    third = second;
                    second = num;}
                else if (num < second)
                    if (num > third)
                        third = num;
            }
        }
        if (first == INT64_MIN || second == INT64_MIN || third == INT64_MIN)
            return (int)first;
        else
            return (int)third;
    }
};
