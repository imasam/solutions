#include <iostream>
#include <cmath>
using namespace std;

#define pi acos(-1.0)

int main()
{
	double d, h, a, b, y;
	cin >> d >> h;
	while (cin >> a >> b >> y && !(a <= 0 && b <= 0 && y <= 0))
	{
		a = a / 180 * pi;
		b = b / 180 * pi;
		y = y / 180 * pi;
		int result = round(h + sin(b) * sqrt(2 * d * d / (sin(b) * sin(b) / (sin(a) * sin(a)) + sin(b) * sin(b) / (sin(y) * sin(y)) - 2)));
		cout << result << endl;
	}
    return 0;
}