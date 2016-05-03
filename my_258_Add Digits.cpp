#include<iostream>
#include<math.h>
using namespace std;

int len_shuzi(int num)
{
	int len;
	for (len = 1;; len++)
	{
		num = num / 10;
		if (num == 0)
			break;
	}
	return len;
}

int addDigits(int num)
{
	int len = len_shuzi(num);
	if (len == 1)
		return num;
	else
	{
		int temp = 0;
		for (int i = 1; i <= len; i++)
		{
			temp = temp + num / (int(pow(10, len - i)));
			num = num % (int(pow(10, len - i)));
		}
		addDigits(temp);
	}
}

int main()
{
	int t;
	t = addDigits(12345);
	cout << t << endl;
	return 0;
}
