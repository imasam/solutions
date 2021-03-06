#include <iostream>
using namespace std;

int l(int n, int len)
{
	if (n == 1)
		return len;
	else if (n % 2 == 1)
		return l(n * 3 + 1, len + 1);
	else
		return l(n / 2, len + 1);
}

int main()
{
	int i, j;
	while (cin >> i >> j && !(i == 0 && j == 0))
	{
		int max = l(i, 1);
		for (int k = i + 1; k <= j; k++)
		{
			if (l(k, 1) > max)
				max = l(k, 1);
		}
		cout << max << endl;
	}
    return 0;
}

