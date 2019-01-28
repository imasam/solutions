#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 0 || n > 10000)
			break;
		int result = sqrt(n);
		cout << result << endl;
	}
	return 0;
}