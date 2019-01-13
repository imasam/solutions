#include <iostream>
#include <string>
using namespace std;

int main()
{
	int m, n, max_feed;
	int like[100][100], remain[100];
	bool flag;

	while (cin >> m >> n)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> like[i][j];
		cin >> max_feed;
		for (int i = 0; i < m; i++)
			remain[i] = max_feed;
		for (int j = 0; j < n; j++)
		{
			flag = false;
			for (int i = 0; i < m; i++)
				if (like[i][j] == 1 && remain[i] > 0)
				{
					remain[i]--;
					flag = true;
					break;
				}
			if (flag == false)
			{
				cout << "No" << endl;
				break;
			}
		}
		if (flag == true)
			cout << "Yes" << endl;
	}
    return 0;
}