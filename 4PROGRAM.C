#include <stdio.h>
int main()
{
	float t[24], max, min, sum = 0, avg;
	int i, hmax = 0, hmin = 0;
	int valid = 1;
	printf("Enter 24 hourly temperatures:\n");
	for (i = 0; i < 24; i++)
	{
		scanf("%f", &t[i]);
		if (t[i] < 0)
		{
			valid = 0;
			sum += t[i];
		}
	}
	if (!valid)
	{
		printf("\nError: Invalid Temperature Input!\n");
		return 0;
	}
	max = min = t[0];
	for (i = 1; i < 24; i++)
	{
		if (t[i] > max)
		{
			max = t[i];
			hmax = i;
		}
		if (t[i] < min)
		{
			min = t[i];
			hmin = i;
		}
	}
	avg = sum / 24;
	printf("\nMax Temp = %.2f at hour %d\n", max, hmax);
	printf("Min Temp = %.2f at hour %d\n", min, hmin);
	printf("Average  = %.2f\n", avg);
	 if (avg > 30)
        printf("Day Classification: Hot\n");
    else if (avg >= 15)
        printf("Day Classification: Normal\n");
    else
        printf("Day Classification: Cold\n");

    return 0;
}

