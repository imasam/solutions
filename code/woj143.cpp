#include <iostream>
using namespace std;

int main()
{
	int p, m, n;
	while (cin >> m >> p >> n && !(m == 0 && p == 0 && n == 0))
	{
		m > p * n ? cout << m << endl : cout << p * n << endl;
	}
    return 0;
}