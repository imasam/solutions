#include <iostream>
using namespace std;

int main()
{
	long n;
	while (cin >> n)
	{
		cout << (n * n * n + 5 * n + 6) / 6 << endl;
	}
    return 0;
}