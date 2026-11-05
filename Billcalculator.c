#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    float fixed_charge = 50.0;

    printf("Enter total electricity units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input! Please enter a valid positive integer.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5.0;
    } 
    else if (units <= 300) {
        
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } 
    else {
        
        bill = (100 * 5.0) + (200 * 7.0) + ((units - 300) * 10.0);
    }

    bill += fixed_charge;

    printf("\n---------------------------------\n");
    printf("       ELECTRICITY BILL          \n");
    printf("---------------------------------\n");
    printf("Units Consumed : %d\n", units);
    printf("Fixed Charge   : ₹%.2f\n", fixed_charge);
    printf("Total Amount   : ₹%.2f\n", bill);
    printf("---------------------------------\n");

    return 0;
}