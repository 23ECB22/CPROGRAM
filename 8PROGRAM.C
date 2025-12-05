 #include <stdio.h>
#include <string.h>
void waterStatus(float level, char *status)
{
    if (level < 0 || level > 100) 
    {
        strcpy(status, "Error");
        return;
    }

    if (level < 10)
        strcpy(status, "LOW + ALERT + Fill");
    else if (level < 30)
        strcpy(status, "LOW + Fill");
    else if (level <= 70)
        strcpy(status, "MEDIUM");
    else
        strcpy(status, "HIGH");
}

int main() 
{
    float inputLevels[] = {5, 15, 50, 90, 100, -0.008};
    char testID[][5] = {"WL1", "WL2", "WL3", "WL4", "WL5", "WL6"};
    
    char expectedOutput[][25] = {
        "LOW + ALERT + Fill",
        "LOW + Fill",
        "MEDIUM",
        "HIGH",
        "HIGH",
        "Error"
    };

    printf("--WATER LEVEL INDICATOR TEST CASES --\n\n");

    for (int i = 0; i < 6; i++) {
        char actual[30];
        waterStatus(inputLevels[i], actual);

        printf("Test Case: %s\n", testID[i]);
        printf("Input Level     : %.3f\n", inputLevels[i]);
        printf("Expected Output : %s\n", expectedOutput[i]);
        printf("Actual Output   : %s\n", actual);

        if (strcmp(actual, expectedOutput[i]) == 0)
            printf("Result: PASS \n");
        else
            printf("Result: FAIL \n");

        printf("--\n");
    }

    return 0;
}
