#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
		cout << ceil((double)n / 2) << endl;
    return 0;
}

