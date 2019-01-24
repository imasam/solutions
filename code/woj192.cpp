#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int pixel, result;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int k = 0, b[8] = { 0, };
				cin >> pixel;
				while (pixel != 0)
				{
					b[k++] = pixel % 2;
					pixel /= 2;
				}
				result = b[0] ^ b[1] ^ b[2] ^ b[3] ^ b[4] ^ b[5] ^ b[6] ^ b[7];
				cout << result << " ";
			}
			cout << endl;
	}
	}
	return 0;
}