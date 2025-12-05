 #include <stdio.h>
#include <string.h>

float calculateFine(int d, char expectedRemark[])
{
      if (d < 0) { 
        strcpy(expectedRemark, "Error");
        return -1; 
    }
    if (d > 30) { 
        strcpy(expectedRemark, "Membership Cancelled");
        return -1;
    }

    if (d == 0)
    {
        strcpy(expectedRemark, "No fine");
        return 0;
    }
    else if (d <= 5) {
        strcpy(expectedRemark, "2/day");
        return d * 2;
    }
    else if (d <= 10) {
        strcpy(expectedRemark, "5/day");
        return d * 5;
    }
    else {
        strcpy(expectedRemark, "10/day");
        return d * 10;
    }
}

int main() 
{
 
    int days[] = {0, 3, 8, 15, 31, 35, -5};
    
    char testID[][5] = {"LF1","LF2","LF3","LF4","LF5","LF6","LF7"};
    char expectedRemark[][30] = {
        "No fine", "2/day", "5/day", "10/day",
        "Membership Cancelled", "Membership Cancelled", "Error"
    };
    float expectedFine[] = {0, 6, 40, 150, -1, -1, -1};

    printf("--LIBRARY FINE CALCULATOR TEST CASES --\n\n");

    for (int i = 0; i < 7; i++)
    {

        char actualRemark[30];
        float actualFine = calculateFine(days[i], actualRemark);

        printf("Test Case: %s\n", testID[i]);
        printf("Input Days  : %d\n", days[i]);
        printf("Expected Fine: %.2f, Expected Remark: %s\n",
                expectedFine[i], expectedRemark[i]);
        printf("Actual Fine  : %.2f, Actual Remark  : %s\n",
                actualFine, actualRemark);

        if (actualFine == expectedFine[i] && strcmp(actualRemark, expectedRemark[i]) == 0)
            printf("Result: PASS \n");
        else
            printf("Result: FAIL \n");

        printf("---\n");
    }

    return 0;
}
