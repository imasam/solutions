#include <iostream>
using namespace std;

int main()
{
	long n;
	while (cin >> n && n != 0)
	{
		long result = 0;
		for (long i = n / 3; i >= 0; i--) {
			long j = (n - i * 3) / 2 + 1;
			result += j;
		}
		cout << result << endl;
	}
    return 0;
}