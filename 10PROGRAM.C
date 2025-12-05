 #include <stdio.h>
float calculateSalary(int hrs[7]) 
{
    float total = 0;

    for (int i = 0; i < 7; i++) 
    {

        if (hrs[i] < 0) 
            return -1;   

        int normal = hrs[i] <= 8 ? hrs[i] : 8;
        int ot = hrs[i] > 8 ? hrs[i] - 8 : 0;

        total += (normal * 100) + (ot * 100);
    }

    return total;
}
int main()
{
    int TC1[] = {8,8,8,8,8,8,8};                    
    int TC2[] = {10,10,10,10,10,10,10};            
    int TC3[] = {8,10,6,12,7,9,8};                 
    int TC4[] = {0,0,0,0,0,0,0};                   
    int TC5[] = {24,24,24,24,24,24,24};            
    int TC6[] = {8,8,-3,8,8,8,8};                  
 char *TC_ID[] = {"EP1","EP2","EP3","EP4","EP5","EP6"};
 int *allTC[] = {TC1, TC2, TC3, TC4, TC5, TC6};
   printf("-- EMPLOYEE PAYROLL TEST CASES --\n\n");
   for (int t = 0; t < 6; t++) {
    printf("Test Case: %s\n", TC_ID[t]);
     float salary = calculateSalary(allTC[t]);
     if (salary < 0) {
            printf("Output: Error (Invalid hours)\n");
        } 
        else {
            printf("Calculated Salary: %.2f\n", salary);
        }
        printf("--\n");
    }

    return 0;
}
