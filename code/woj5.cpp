#include <iostream>
#include <algorithm>
using namespace std;

struct info
{
	int size;
	int point;
};

int main()
{
	int number, noah;
	info animal[100];
	int  dp[100000];
	int result[100];
	int count = 0;
	while (cin >> number)
	{
		for (int i = 0; i < number; i++)
			cin >> animal[i].size >> animal[i].point;
		cin >> noah;
		for (int i = 0; i <= noah; i++)
			dp[i] = 0;
		for (int i = 0; i < number; i++)
			for (int j = noah; j >= animal[i].size; j--)
				dp[j] = max(dp[j], dp[j - animal[i].size] + animal[i].point);
		result[count++] = dp[noah];
	}
	for (int i = 0; i < count; i++)
		cout << result[i] << endl;
    return 0;
}

