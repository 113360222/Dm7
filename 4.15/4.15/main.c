#include <math.h>  
#include <stdio.h>
int main() {
    double principal = 5000.0;
    double rate;
    for (rate = 10.0; rate <= 12.0; rate += 0.5) {
        printf("Interest rate: %.1f%%\n", rate);
        for (int i = 0;i < 15; i++) {
            double amount = principal * pow(1.0 + rate / 100.0, i);
            printf("Year %d: $%.2f\n", i, amount);
        }

        printf("\n");
    }

    return 0;
}