#include <iostream>
#include <algorithm>
using namespace std;

int cb[1000][1000];
int dp[1000][1000] = { 0 };

int main()
{
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> cb[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (i == 0)
					dp[i][j] = cb[i][j];
				else if (j == 0)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]) + cb[i][j];
				else if (j == n - 1)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + cb[i][j];
				else
					dp[i][j] = max(max(dp[i - 1][j + 1], dp[i - 1][j - 1]), dp[i - 1][j]) + cb[i][j];
			}
		int max = dp[n - 1][0];
		for (int i = 1; i < n; i++)
			if (dp[n - 1][i] > max)
				max = dp[n - 1][i];
		cout << "Case " << k + 1 << ":" << endl << max << endl;
		if (k != t - 1)
			cout << endl;
	}
	return 0;
}