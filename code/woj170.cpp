#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n;
	set<int> data;
	while (cin >> n && n != 0)
		data.insert(n);
	for (auto it = data.begin(); it != data.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}