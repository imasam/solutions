#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> choc;
		choc.push_back(2);
		int in_next = 0;
		while (n--)
		{
			for (auto it = choc.begin(); it != choc.end(); it++)
			{
				*it = *it * 2 + in_next;
				if (*it >= 10)
				{
					*it -= 10;
					in_next = 1;
				}
				else
					in_next = 0;
			}
			if (in_next == 1)
			{
				in_next = 0;
				choc.push_back(1);
			}
		}
		choc[0]--;
		for (auto it = choc.rbegin(); it != choc.rend(); it++)
			cout << *it;
		cout << endl;
	}
    return 0;
}