class Solution {
public:
    string convertToTitle(int n) {
	vector<char> result;
	int a;
	while (n > 26) {
	    if(n % 26 == 0){
			a = 26;
		    result.push_back((char)(a + 64));
		    n = n / 26-1;}
		else{
			a = n % 26;
		    result.push_back((char)(a + 64));
		    n = n / 26;}
	}
	if (n % 26 == 0)
	    a = 26;
	else
		a = n % 26;
	result.push_back((char)(a + 64));
	auto b= result.begin();
	auto e= result.end();
	string r="";
	for (auto c=e-1;c!=b;c--){
		r = r + *c;
	}
	r = r + *b;
	return r;
    }
};
