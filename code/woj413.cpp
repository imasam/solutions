#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, h;
		cin >> a >> b >> h;
		cout << setiosflags(ios::fixed) << setprecision(2) << 1.0 * b / a * h << endl;
	}
}