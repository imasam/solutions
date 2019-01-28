#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct card
{
	int value;
	int suit;
};

card trans(string s)
{
	card tmp;
	switch (s[0])
	{
	case 'T':tmp.value = 10; break;
	case 'J':tmp.value = 11; break;
	case 'Q':tmp.value = 12; break;
	case 'K':tmp.value = 13; break;
	case 'A':tmp.value = 14; break;
	default:tmp.value = s[0] - '0';
	}
	switch (s[1])
	{
	case 'C':tmp.suit = 1; break;
	case 'D':tmp.suit = 2; break;
	case 'S':tmp.suit = 3; break;
	case 'H':tmp.suit = 4; break;
	}
	return tmp;
}

bool cmp(card i, card j)
{
	if (i.value == j.value)
		return i.suit < j.suit;
	else
		return i.value < j.value;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int k, result = 0;
		cin >> k;
		string tmp;
		vector<card> adam(k), eve(k);
		for (int j = 0; j < k; j++)
		{
			cin >> tmp;
			adam[j] = trans(tmp);
		}
		for (int j = 0; j < k; j++)
		{
			cin >> tmp;
			eve[j] = trans(tmp);
		}
		sort(eve.begin(), eve.end(), cmp);
		vector<int> used(k, 1);
		for (int i = 0; i < k; i++)
			for (int j = 0; j < k; j++)
				if (used[j] && cmp(adam[i], eve[j])) 
				{
					used[j] = 0; 
					result++;
					break;
				}
		cout << result << endl;
	}
	return 0;
}