#include <iostream>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int min;
		cin >> min;
		for (int i = 1; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			if (tmp < min)
				min = tmp;
		}
		cout << m / min << endl;
	}
    return 0;
}