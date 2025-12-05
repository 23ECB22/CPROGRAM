#include <stdio.h>

int main() {
    int choice;
    float balance = 0, amt;
    while (1) 
    {
        printf("\n-- ATM MENU --\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amt);

                if (amt <= 0) 
                {
                    printf("Invalid deposit amount!\n");
                } 
                else
                {
                    balance += amt;
                    printf("Amount Deposited Successfully!\n");
                }
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amt);
                if (amt <= 0)
                {
                    printf("Invalid withdrawal amount!\n");
                } 
                else if (amt > balance)
                {
                    printf("Error: Insufficient Balance!\n");   
                } 
                else
                {
                    balance -= amt;
                    printf("Withdrawal Successful!\n");       
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);    
                break;

            case 4:
                printf("Thank you for using ATM!\n");         
                return 0;

            default:
                printf("Invalid Option Selected!\n");          
        }
    }
} 
