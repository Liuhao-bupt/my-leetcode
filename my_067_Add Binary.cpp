class Solution {
public:
    string addBinary(string a, string b) {
        if (a.empty() && b.empty())
            return "0";
        if (a.empty() || a == "0")
            return b;
        if (b.empty() || b == "0")
            return a;
        string::size_type size = max(a.size(), b.size());
        string result(size+1,' ');
        int i, j;
        i = a.size() - 1;
        j = b.size() - 1;
        char temp = '0';
        for(; i >= 0 && j >= 0; --i, --j, --size)
        {
            if (a[i] == '1' && b[j] == '1') {
                result[size] = temp; 
                temp = '1';} 
            else if (a[i] == '0' && b[j] == '0') {
                result[size] = temp; 
                temp = '0';} 
            else 
                result[size] = '1' + '0' - temp; 
        }
        for(; i >= 0; --i, --size)
        {
            if (a[i] == '1' && temp == '1')
                result[size] = '0', temp = '1';
            if (a[i] == '1' && temp == '0')
                result[size] = '1', temp = '0';
            if (a[i] == '0' && temp == '0')
                result[size] = '0', temp = '0';
            if (a[i] == '0' && temp == '1')
                result[size] = '1', temp = '0';
        }
        for(; j >= 0; --j, --size)
        {
            if (b[j] == '1' && temp == '1')
                result[size] = '0', temp = '1';
            if (b[j] == '1' && temp == '0')
                result[size] = '1', temp = '0';
            if (b[j] == '0' && temp == '0')
                result[size] = '0', temp = '0';
            if (b[j] == '0' && temp == '1')
                result[size] = '1', temp = '0';
        }
        if(temp == '1')
            result[0] = '1';
        else
            result = result.substr(1);
        return result;
    }
};
