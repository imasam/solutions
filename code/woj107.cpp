#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int matrix[5][5] = { {5,-1,-2,-1,-3},
					 {-1,5,-3,-2,-4},
					 {-2,-3,5,-2,-2},
					 {-1,-2,-2,5,-1},
					 {-3,-4,-2,-1,0} };

int getScore(char _c1, char _c2)
{
	int tmp1 = 0, tmp2 = 0;
	switch (_c1)
	{
	case'A': tmp1 = 0; break;
	case'C': tmp1 = 1; break;
	case'G': tmp1 = 2; break;
	case'T': tmp1 = 3; break;
	case'-': tmp1 = 4; break;
	}
	switch (_c2)
	{
	case'A': tmp2 = 0; break;
	case'C': tmp2 = 1; break;
	case'G': tmp2 = 2; break;
	case'T': tmp2 = 3; break;
	case'-': tmp2 = 4; break;
	}
	return matrix[tmp1][tmp2];
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int len1, len2;
		string gene1, gene2;
		cin >> len1 >> gene1 >> len2 >> gene2;
		int score[101][101] = { 0, };
		for (int i = 1; i <= len1; i++)
			score[i][0] = score[i - 1][0] + getScore(gene1[i - 1], '-');
		for (int j = 1; j <= len2; j++)
			score[0][j] = score[0][j - 1] + getScore('-', gene2[j - 1]);
		for (int i = 1; i <= len1; i++)				
			for (int j = 1; j <= len2; j++)
				score[i][j] = max(score[i - 1][j - 1] + getScore(gene1[i - 1], gene2[j - 1]),
					max(score[i - 1][j] + getScore('-', gene1[i - 1]), score[i][j - 1] + getScore('-', gene2[j - 1])));
		cout << score[len1][len2] << endl;
	}
	return 0;
}