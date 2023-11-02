#include <iostream>
using namespace std;
int main()
{
	int n, min1, min2, min3, i, x;
	cin >> n;
	min1 = 9999;
	min2 = 9998;
	min3 = 9997;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		if (x < min3)
		{
			min1 = min2;
			min2 = min3;
			min3 = x;
		}
		else if (x < min2)
		{
			min1 = min2;
			min2 = x;
		}
		else if (x < min1)
		{
			min1 = x;
		}
	}
	cout << min1 << ' ' << min2 << ' ' << min3;
	return 0;
}
