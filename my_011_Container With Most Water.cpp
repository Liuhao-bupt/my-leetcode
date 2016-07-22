class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size() - 1;
        int max_water = 0;
        while (low < high) {
            int min_height = min(height[low], height[high]);
            int cur_contain = (high-low)*min_height;
            max_water = cur_contain > max_water ? cur_contain: max_water;
            while (height[low] <= min_height)
                ++low;
            while (height[high] <= min_height)
                --high;
        }
        return max_water;
    }
};
