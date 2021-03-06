#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	//map<int, string> people;
	cin >> n;
	vector<string> people(n + 1);
	while (n--)
	{
		int id;
		string name;
		cin >> id >> name;
		people[id] = name;
	}
	cin >> m;
	while (m--)
	{
		int q, count = 0;
		cin >> q;
		while (q--)
		{
			int id1, id2, i;
			cin >> id1 >> id2;
			int l1 = people[id1].length();
			int l2 = people[id2].length();
			for (i = 0; i != l1 && i != l2; i++)
				if (people[id1][i] != people[id2][i])
					break;
			count += i;
		}
		cout << count << endl;
	}
    return 0;
}