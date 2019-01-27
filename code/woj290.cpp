#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int result = 0;
		for (int i = 0; i < n; i++) 
			for (int j = 1; j < n - i; j++) 
				if (arr[j] < arr[j - 1]) 
				{
					int tmp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = tmp;
					result++;
				}
		cout << result << endl;
	}
	return 0;
}