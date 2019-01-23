#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 1;
	while (cin >> s && s != "#")
	{
		for (int i = 0; i < s.length(); i++)
			if ((i + 1) % 2 == 0)
				s[i] = toupper(s[i]);
		cout << "Case " << count << ": " << s << endl;
		count++;
	}
}