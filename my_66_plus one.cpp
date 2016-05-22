class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())
            return {};
        vector<int> result;
        vector<int>::size_type sz = digits.size(), index;
        digits[sz-1] += 1;
        for(index = sz - 1; index > 0; --index)
        {
            if(digits[index] == 10){
                digits[index] = 0;
                digits[index - 1] += 1;
                if(digits[index - 1] != 10)
                    return digits;}
            else
                return digits;
        }
        if (digits[0] == 10)
        {
            result.push_back(1);
            result.push_back(0);
            for(auto c = digits.begin() + 1; c != digits.end(); ++c)
                result.push_back(*c);
        }
        else
            result = digits;
        return result;
    }
};
