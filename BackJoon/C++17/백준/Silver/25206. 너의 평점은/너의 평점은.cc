#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char subject[51], rating[2];
	int a;
	double result = 0.0, score, unit = 0.0;
	for (a = 0; a < 20; a++)
	{
		scanf("%s %lf %s", subject, &score, rating);
		if (rating[0] != 'F' && rating[0] != 'P')
		{
			if (rating[0] == 'A' && rating[1] == '+') result += score * 4.5;
			else if (rating[0] == 'A' && rating[1] == '0') result += score * 4.0;
			else if (rating[0] == 'B' && rating[1] == '+') result += score * 3.5;
			else if (rating[0] == 'B' && rating[1] == '0') result += score * 3.0;
			else if (rating[0] == 'C' && rating[1] == '+') result += score * 2.5;
			else if (rating[0] == 'C' && rating[1] == '0') result += score * 2.0;
			else if (rating[0] == 'D' && rating[1] == '+') result += score * 1.5;
			else if (rating[0] == 'D' && rating[1] == '0') result += score * 1.0;
		}
		if (rating[0] != 'P') unit += score;
	}
	printf("%lf", result / (double)unit);
	/*if (unit) printf("%lf", result / (double)unit);
	else printf("0.000000");*/
	return 0;
}