#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * add_strings - Adds two strings representing numbers
 * @num1: The first number
 * @num2: The second number
 * @result: The result of the addition
 */
void add_strings(char num1[], char num2[], char result[])
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int carry = 0;
	int i, j;

	int max_len = (len1 > len2) ? len1 : len2;

	memset(result, 0, 5000);

	for (i = len1 - 1, j = len2 - 1; 
	     i >= 0 || j >= 0 || carry; 
	     i--, j--, max_len--)
	{
		int n1 = (i >= 0) ? num1[i] - '0' : 0;
		int n2 = (j >= 0) ? num2[j] - '0' : 0;

		int tmp = n1 + n2 + carry;
		carry = tmp / 10;
		result[max_len] = (tmp % 10) + '0';
	}
}

/**
 * main - Program entry point
 * Return: 0 on success
 */
int main(void)
{
	char a[5000] = "1";
	char b[5000] = "2";
	char result[5000];
	int i;

	printf("%s, %s", a, b);

	for (i = 2; i < 98; i++)
	{
		add_strings(a, b, result);
		printf(", %s", result);
		strcpy(a, b);
		strcpy(b, result);
	}

	printf("\n");
	return (0);
}
