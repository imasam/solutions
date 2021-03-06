#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m && n != 0 & m != 0)
	{
		vector<int> data(n);
		for (int i = 0; i < n; i++)
			cin >> data[i];

		sort(data.begin(),data.end());
		for (int i = 0; i < n; i = i + m)
			if (i == 0)
				cout << data[i];
			else
				cout << " " << data[i];
		cout << endl;
	}
	return 0;
}