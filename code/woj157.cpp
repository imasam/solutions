#include <iostream>
using namespace std;

int main()
{
	int n, count = 1;
	while (cin >> n && n != -1)
	{
		int tmp, collision = 0, sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			if (tmp == 1)
				collision++;
			else
				sum += collision;
		}
		cout << "Case " << count << ": " << sum << endl;
		count++;
	}
}