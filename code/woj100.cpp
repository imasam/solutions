#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[8] = { "littleken", "knuthocean", "dongfangxu", "zap", "kittig", "robertcui", "forest", "flirly" };
	int t;
	cin >> t;
	while (t--)
	{
		int max = 0;
		int count[8] = { 0, };
		string s;
		cin >> s;
		for (int i = 0; i < s.length();)
		{
			for (int j = 0; j < 8; j++)
				if (s[i] == name[j][0] && s[i + 1] == name[j][1])
				{
					count[j]++;
					i += name[j].length();
					break;
				}
		}
		for (int k = 1; k < 8; k++)
			if (count[k] > count[max])
				max = k;
		cout << name[max] << endl;
	}
	return 0;
}