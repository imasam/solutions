#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
		cout << (n % 2 ? to_string(n - 1) : "No Solution!") << endl;
	return 0;
}