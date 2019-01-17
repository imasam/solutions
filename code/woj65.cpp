#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x = 0, y = 0, k = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'U')
				y++;
			else if (s[i] == 'R')
			{
				x++;
				k += y;
			}
		}
		cout << setiosflags(ios::fixed) << setprecision(3) << (double)(x * y * 0.5 - k) << endl;
	}
    return 0;
}