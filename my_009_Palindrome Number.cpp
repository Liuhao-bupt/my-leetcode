class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0)
        return false;
    int sz = 0, y = x;
    while(y)
        y /= 10, ++sz;
    for(int i = 0; i < sz / 2; ++i)
    {
        if(get_num(x, i) != get_num(x, sz-1-i))
            return false;
    }
    return true;
    }
    
    int get_num(int num, int j){
        for(int k = 0; k < j; ++k)
           num /= 10;
         return num%10;
    }
};
