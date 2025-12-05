#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validateMobile(const char *mob)
{
    int len = strlen(mob);

    if (len != 10)
        return 0;
    if (mob[0] == '0')
        return 0;

    for (int i = 0; i < len; i++)
        if (!isdigit(mob[i]))
            return 0;

    return 1;
}
int main()
{
    char testID[][4] = {"MV1","MV2","MV3","MV4","MV5","MV6","MV7"};
    char input[][20] = {
        "9876543210",   // Valid
        "123456789",    // Starts with 0? NO but length invalid
        "12345",        // Too short
        "12345678910",  // Too long
        "98A6543210",   // Non-digit
        "",             // Empty
        "987 654 3210"  // Contains space
    };

    char expected[][10] = {
        "Valid",
        "Invalid",
        "Invalid",
        "Invalid",
        "Invalid",
        "Invalid",
        "Invalid"
    };

    printf("-- MOBILE NUMBER VALIDATOR TEST CASES --\n\n");

    for (int i = 0; i < 7; i++) 
    {
        int valid = validateMobile(input[i]);

        printf("Test Case: %s\n", testID[i]);
        printf("Input Mobile    : '%s'\n", input[i]);
        printf("Expected Output : %s\n", expected[i]);
        printf("Actual Output   : %s\n", valid ? "Valid" : "Invalid");

        if ((valid && strcmp(expected[i], "Valid") == 0) ||
            (!valid && strcmp(expected[i], "Invalid") == 0))
            printf("Result: PASS \n");
        else
            printf("Result: FAIL \n");

        printf("--\n");
    }

    return 0;
} 
