#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define THRESHHOLD 1e-9

int main()
{
	double length, width, height;
	string length_unit, width_unit, height_unit;
	string result[1000];
	int count = 0;
	while (cin >> length >> length_unit >> width >> width_unit >> height >> height_unit)
	{
		if (length_unit == "meters")
			length *= 100;
		else if (length_unit == "inches")
			length *= 2.54;
		else if (length_unit == "cubits")
			length *= 45.72;
		else if (length_unit == "feet")
			length *= 30.48;

		if (width_unit == "meters")
			width *= 100;
		else if (width_unit == "inches")
			width *= 2.54;
		else if (width_unit == "cubits")
			width *= 45.72;
		else if (width_unit == "feet")
			width *= 30.48;
	
		if (fabs(length - width) < THRESHHOLD)
			result[count] = "Spin";
		else if (fabs(length - 6 * width) < THRESHHOLD)
			result[count] = "Excellent";
		else 
			result[count] = "Neither";
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		cout << result[i] << endl;
		cout << endl;
	}
    return 0;
}

