#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	char r, c;
	int n, m, i;
	while (cin >> r >> n >> c >> m && !(n == 0 && m == 0))
	{
		map<int, string> map;
		for (i = 0; m != 0; i++)
			if (m % 26)
			{
				map[i] = m % 26 - 1 + 'A';
				m = m / 26;
			}
			else
			{
				map[i] = 'Z';
				m = m / 26 - 1;
			}
		while (i--)
			cout << map[i];
		cout << n << endl;
	}
    return 0;
}