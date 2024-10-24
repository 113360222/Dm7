#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    
    while (1) {
       
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        if (principal == -1) {
            break;
        }

        printf("Enter interest rate: ");
        scanf("%f", &rate);

   
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

   
        interest = (principal * rate * days) / 365;


        printf("The interest charge is $%.2f\n", interest);
    }

    return 0;
}
