#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int n, x1, y1, x2, y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;
		int dx = abs(x1 - x2);
		int dy = abs(y1 - y2);
		if (abs(dy - dx) % 2)
			if (i != t)
				cout << "Case " << i << ":" << endl << "-1" << endl << endl;
			else
				cout << "Case " << i << ":" << endl << "-1";
		else
			if (i != t)
				cout << "Case " << i << ":" << endl << (dy > dx ? dy : dx) << endl << endl;
			else
				cout << "Case " << i << ":" << endl << (dy > dx ? dy : dx);
	}
    return 0;
}