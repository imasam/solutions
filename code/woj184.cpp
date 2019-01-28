#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		//cout << int(sqrt(n)) << endl;
		if (n <= 0 || n > 10000)
			break;
		int result = sqrt(n);
		cout << result << endl;
	}
	return 0;
}