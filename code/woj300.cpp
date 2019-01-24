#include <iostream>
using namespace std;

int main()
{
	int c;
	cin >> c;
	while (c--)
	{
		int n;
		cin >> n;
		cout << (n % 7 == 0 || n % 7 == 1 ? "Dzs" : "Sproblvem") << endl;
	}
	return 0;
}
