#include <iostream>
using namespace std;

int score(double x, double y)
{
	if (x * x + y * y <= 3 * 3)
		return 100;
	else if (x * x + y * y <= 6 * 6)
		return 80;
	else if (x * x + y * y <= 9 * 9)
		return 60;
	else if (x * x + y * y <= 12 * 12)
		return 40;
	else if (x * x + y * y <= 15 * 15)
		return 20;
	else
		return 0;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 && x1 != -100)
	{
		double score1 = score(x1, y1) + score(x2, y2) + score(x3, y3);
		double score2 = score(x4, y4) + score(x5, y5) + score(x6, y6);
		if (score1 > score2)
			cout << "SCORE: " << score1 << " to " << score2 << ", PLAYER 1 WINS." << endl;
		else if (score1 < score2)
			cout << "SCORE: " << score1 << " to " << score2 << ", PLAYER 2 WINS." << endl;
		else
			cout << "SCORE: " << score1 << " to " << score2 << ", TIE." << endl;
	}
}