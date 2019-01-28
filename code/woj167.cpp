#include <iostream>
#include <string>
#include <vector>
using namespace std;

int r, c;
vector<string> oil;

void setRelate(int i, int j)
{
	if (i < r && i >=0 && j < c && j >=0)
		if (oil[i][j] == 'O')
		{
			oil[i][j] = 'X';
			setRelate(i + 1, j + 1);
			setRelate(i + 1, j - 1);
			setRelate(i - 1, j + 1);
			setRelate(i - 1, j - 1);
			setRelate(i, j + 1);
			setRelate(i, j - 1);
			setRelate(i + 1, j);
			setRelate(i - 1, j);
		}
		else
			return;
	else
		return;
}

int main()
{
	while (cin >> r >> c && r != 0 && c != 0)
	{
		oil.clear();
		for (int i = 0; i < r; i++)
		{
			string tmp;
			cin >> tmp;
			oil.push_back(tmp);
		}
		int result = 0;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				if (oil[i][j] == 'O')
				{
					result++;
					setRelate(i, j);
				}
		cout << result << endl;
	}
	return 0;
}