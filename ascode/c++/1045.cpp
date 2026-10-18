#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void number(int a)
{
	if (a == 2) printf("ÀÌ");
	else if (a == 3) printf("»ï");
	else if (a == 4) printf("»ç");
	else if (a == 5) printf("¿À");
	else if (a == 6) printf("À°");
	else if (a == 7) printf("Ä¥");
	else if (a == 8) printf("ÆÈ");
	else if (a == 9) printf("±¸");
}
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char num[5] = { 0 };
		scanf("%s", num);
		int n = atoi(num);
		if (n >= 1000) //ÀÚ¸´¼ö 4°³
		{
			for (int j = 0; j < 4; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j] - '0'));
					if (j == 0) printf("Ãµ");
					else if (j == 1) printf("¹é");
					else if (j == 2) printf("½Ê");
				}
			}
			if (num[3] - '0' == 1) printf("ÀÏ");
		}
		else if (n >= 100) //3°³
		{
			for (int j = 0; j < 3; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j] - '0'));
					if (j == 0) printf("¹é");
					else if (j == 1) printf("½Ê");
				}
			}
			if (num[2] - '0' == 1) printf("ÀÏ");
		}
		else if (n >= 10) //2
		{
			for (int j = 0; j < 2; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j] - '0'));
					if (j == 0) printf("½Ê");
				}
			}
			if (num[1] - '0' == 1) printf("ÀÏ");
		}
		else //1
		{
			number(int(num[0] - '0'));
			if (num[0] - '0' == 1) printf("ÀÏ");
		}
		printf("\n");
	}
	return 0;
}