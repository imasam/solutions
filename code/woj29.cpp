#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s && s != "$")
	{
		string result;
		for (int i = 0; i < s.length(); i++)
		{
			s[i] -= (i + 27) % 26;
			if (s[i] < 'A')
				s[i] += 26;
			result += s[i];
		}
		cout << result << endl;
	}
    return 0;
}