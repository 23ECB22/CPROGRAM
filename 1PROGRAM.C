 #include <stdio.h>
int main()
{
    int m[6], i;
    int total = 0;
    float percent;
    int cAbove90 = 0, c75_90 = 0, c50_75 = 0, cBelow50 = 0;
    int valid = 1;
    printf("Enter marks of 6 subjects:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &m[i]);
      if (m[i] < 0 || m[i] > 100) {
            valid = 0;
        }
       total += m[i];
        if (m[i] > 90)
            cAbove90++;
        else if (m[i] >= 75)  
            c75_90++;
        else if (m[i] >= 50)
            c50_75++;
        else
            cBelow50++;
    }
     if (!valid) {  
        printf("\nInvalid Input\n");
        printf("Result: Error\n");
        return 0;
    }
    percent = total / 6.0;
    printf("\nTotal = %d", total);
    printf("\nPercentage = %.1f\n", percent);
 if (percent > 95)
        printf("Performance Category: Excellent\n");
    else if (percent >= 80)
        printf("Performance Category: Very Good\n");
    else if (percent >= 60)
        printf("Performance Category: Average\n");
    else if (percent >= 50)
        printf("Performance Category: Needs Improvement\n");
    else
        printf("Performance Category: Needs Improvement\n");
printf("\nRange Count (>90 / 75–90 / 50–75 / <50) : %d / %d / %d / %d\n",
           cAbove90, c75_90, c50_75, cBelow50);
  return 0;
}
