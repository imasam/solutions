#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

struct point
{
	double x;
	double y;
};

point c_tmp1, c_tmp2;

double dis(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void cal_center(double x1, double y1, double x2, double y2, int r)
{
	double r_tmp = dis(x1, y1, (x1 + x2) / 2.0, (y1 + y2) / 2.0);
	double delta = sqrt(pow(r, 2) - pow(r_tmp, 2));
	double arc = atan2(x1 - x2, y2 - y1);	// put this statement alone!!!
	c_tmp1.x = (x1 + x2) / 2.0 + delta * cos(arc);
	c_tmp1.y = (y1 + y2) / 2.0 + delta * sin(arc);
	c_tmp2.x = x1 + x2 - c_tmp1.x;
	c_tmp2.y = y1 + y2 - c_tmp1.y;
}

int main()
{
	int n, r;
	while (cin >> n >> r)
	{
		int result = 0;
		vector<point> points(n);
		for (int i = 0; i < n; i++)
			cin >> points[i].x >> points[i].y;
		if (n != 0)
		{
			result = 1;
			for (int i = 0; i < n; i++)
				for (int j = i + 1; j < n; j++)
				{
					if (dis(points[i].x, points[i].y, points[j].x, points[j].y) > 2 * r)
						continue;
					int count1 = 0, count2 = 0;
					cal_center(points[i].x, points[i].y, points[j].x, points[j].y, r);
					for (int k = 0; k < n; k++)
					{
						if (dis(points[k].x, points[k].y, c_tmp1.x, c_tmp1.y) <= r)
							count1++;
						if (dis(points[k].x, points[k].y, c_tmp2.x, c_tmp2.y) <= r)
							count2++;
					}
					result = max(max(count1, count2), result);
				}
		}
		cout << result << endl;
	}
	return 0;
}