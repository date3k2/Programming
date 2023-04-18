#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	short int a, b, c;
	cin >> a, b, c;
	if ((c % 400 == 0) or (c % 4 == 0 && c % 100 != 0))
	{
		if ((a = 31) && (b == (1, 3, 5, 7, 8, 10, 12) && (b <= 12)) or ((a <= 30) && (b != 2) && (b <= 12)) or ((a = 29) && (b = 2) && (b <= 12)))
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else
	{
		if (((a = 31) && (b == (1, 3, 5, 7, 8, 10, 12) && (b <= 12)) or ((a <= 30) && (b != 2) && (b <= 12)) or ((a = 28) && (b = 2) && (b <= 12)))
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	return 0;
}
