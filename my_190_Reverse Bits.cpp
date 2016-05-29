class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
	unsigned int res = 0;
	bitset<32> bs = n;
	int it = 0;
	for (auto c = 31; c >= 0; --c)
		res += (bs[c] * pow(2, it++));
	return res;
    }
};
