#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		if (n < 3)
			cout << n << endl;
		else if (n == 4)
			cout << "2 2" << endl;
		else
		{
			int a = n / 3, b = n % 3;
			if (b == 1)
			{
				a--;
				b += 3;
			}
			if (b == 2)
				cout << "2 ";
			if (b == 4)
				cout << "2 2 ";
			for (int i = 0; i < a; i++)
				if (i == 0)
					cout << "3";
				else
					cout << " 3";
			cout << endl;
		}
	}
    return 0;
}