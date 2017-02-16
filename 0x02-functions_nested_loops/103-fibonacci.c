#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Fibonacci sequence values not exceed 4,000,000
 *
 * Return - o success
 */
int main(void)
{
	long first;
	long second;
	long sum;
	long total_sum;
	int r;

	first = 0;
	second = 1;
	sum = first + second;
	while (sum < 3999999)
	{
		r = sum % 2;
		sum = first + second;
		if (r == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
