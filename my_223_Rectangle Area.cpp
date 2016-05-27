class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int S1 = (D - B) * (C - A);
        int S2 = (H - F) * (G - E);
        int c1 = max(A, E);
        int c2 = min(C, G);
        int c3 = max(B, F);
        int c4 = min(D, H);
        if(c4 <= c3 || c1 >= c2)
            return S1 + S2;
        return S1 + S2 - (c2 - c1) * (c4 - c3);
    }
};
