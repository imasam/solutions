#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;
	getline(cin, s);
	while (t--)
	{
		getline(cin, s);
		if (s[0] >= 'a'&&s[0] <= 'z')
			s[0] = s[0] - 'a' + 'A';
		for (int i = 1; i < s.length(); i++)
			if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ')
				s[i] = s[i] - 'A' + 'a';
		cout << s << endl;
	}
    return 0;
}