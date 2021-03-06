#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a[3][3];
	while (cin >> a[0][0])
	{
		for (int i = 0; i < 3; i++)
			if (i == 0)
				for (int j = 1; j < 3; j++)
					cin >> a[i][j];
			else
				for (int j = 0; j < 3; j++)
					cin >> a[i][j];
		cout << setiosflags(ios::fixed) << setprecision(2)
			<< abs(1.0 * (a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[2][0] * a[1][2] * a[0][1] - a[2][0] * a[1][1] * a[0][2]
				- a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[2][1] * a[1][2]))
			<< endl;
	}
    return 0;
}