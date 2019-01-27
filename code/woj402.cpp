#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point
{
	double x;
	double y;
};

int main()
{
	int k;
	while (cin >> k && k != 0)
	{
		vector<point> arr(k);
		double area = 0;
		for (int i = 0; i < k; i++)
			cin >> arr[i].x >> arr[i].y;
		if (k <= 2)
		{
			cout << "0" << endl;
			continue;
		}
		for (int i = 0; i < k - 1; i++)
			area += 0.5 * (arr[i].x*arr[i + 1].y - arr[i + 1].x*arr[i].y);
		area += 0.5 * (arr[k - 1].x*arr[0].y - arr[0].x*arr[k - 1].y);
		cout << int(fabs(area) + 0.5) << endl;
	}
	return 0;
}