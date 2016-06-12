 vector<int> topKF;
        if (nums.empty())
            return topKF;
        map<int, int> res;
        for (int i = 0; i < nums.size(); ++i) {
            ++res[nums[i]];
        }
        for (int s = 0; s < k; ++s) {
        int max = 0;
        int m1 = 0;
        for (int j = 0; j < res.size(); ++j) {
            if (res[j].second) > max) {
                m = j;
                max = res[j]->second;
            }
        }
        topKF.push_back(res[j]->first);
        res.erase(res[j]->first);
        }
        return topKF;
