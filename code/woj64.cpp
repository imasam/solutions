#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> mark(n);
		int record[1000] = { 0, };
		for (int i = 0; i < n; i++)
		{
			cin >> mark[i];
			record[mark[i]]++;
		}
		sort(mark.begin(), mark.end());
		for (int i = 0; i < n; i++)
		{
			if (record[mark[i]] > 1)
			{
				cout << mark[i] << " ";
				record[mark[i]] = 0;
			}
			else if (record[mark[i]] == 1) {
				cout << mark[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}