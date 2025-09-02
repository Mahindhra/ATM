#include <stdio.h>

int main() {
    int amount, discount = 0, finalAmount;
    printf("Enter the purchase amount: ");
    scanf("%d", &amount);
    if (amount > 500 && amount < 1000) {
        discount = amount * 0.05;   // 5% discount
    } 
    else if (amount > 1000 && amount < 1500) {
        discount = amount * 0.10;   // 10% discount
    } 
    else if (amount > 1500 && amount < 2000) {
        discount = amount *0.20;   // 20% discount
    } 
    else if (amount <= 500) {
        discount = 0;             // No discount
    }
     finalAmount = amount - discount;
    printf("Purchase Amount: %d \n", amount);
    printf("Discount: %d \n", discount);
    printf("Final Amount to Pay: %d \n", finalAmount);

    return 0;
}
