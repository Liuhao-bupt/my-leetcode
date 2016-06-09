// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mint = 1;
        int maxt = n;
        while (mint < maxt) {
            if(isBadVersion(mint + (maxt - mint)/2))
                maxt = mint + (maxt - mint)/2;
            else
                mint = mint + (maxt - mint)/2 + 1;
        }
        return mint;
    }
};
