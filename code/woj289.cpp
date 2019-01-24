#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	while (cin >> s1 && s1 != "#")
	{
		string s2;
		int result = 0;
		cin >> s2;
		for (int i = 0; i < s1.length(); i++)
			if (!(s1[i] == 'A'&&s2[i] == 'T' || s1[i] == 'T'&&s2[i] == 'A'
				|| s1[i] == 'C'&&s2[i] == 'G' || s1[i] == 'G'&&s2[i] == 'C'))
				result++;
		cout << result << endl;
	}
	return 0;
}