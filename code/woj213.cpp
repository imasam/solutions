#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	int n;
	while (cin >> n)
	{
		vector<point> arr(n);
		double area = 0;
		for (int i = 0; i < n; i++)
			cin >> arr[i].x >> arr[i].y;
		for (int i = 0; i < n - 1; i++)
			area += 0.5 * (arr[i].x*arr[i + 1].y - arr[i + 1].x*arr[i].y);
		area += 0.5 * (arr[n - 1].x*arr[0].y - arr[0].x*arr[n - 1].y);
		cout << fabs(area) << endl;
	}
	return 0;
}