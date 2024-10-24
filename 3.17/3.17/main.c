#include <stdio.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

   
    while (1) {
      
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

      
        if (accountNumber == -1) {
            break;
        }

       
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        
        newBalance = beginningBalance + totalCharges - totalCredits;

        
        printf("Account:      %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance:      %.2f\n", newBalance);

       
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }

        printf("\n"); 
    }

    return 0;
}
