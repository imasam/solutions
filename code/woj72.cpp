#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct meeting
{
	int start_t;
	int end_t;
	int length;
};

bool cmp(meeting _m1, meeting _m2)
{
	if (_m1.start_t == _m2.start_t)
			return _m1.end_t > _m2.end_t;
		else
			return _m1.start_t < _m2.start_t;
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<meeting> meetings(n);
		for (int i = 0; i < n; i++)
		{
			cin >> meetings[i].start_t >> meetings[i].end_t;
			meetings[i].length = meetings[i].end_t - meetings[i].start_t + 1;
		}
		sort(meetings.begin(), meetings.end(), cmp);
		int max_length = meetings[0].length;
		for (int i = 1; i < n; i++)
		{
			int next = 0;
			for (int j = 0; j < n; j++)
				if (meetings[i].start_t > meetings[j].end_t)
					next = max(next,  meetings[j].length);
			meetings[i].length += next;
			max_length = max(max_length, meetings[i].length);
		}
		cout << max_length << endl;
	}
	return 0;
}