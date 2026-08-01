#include <stdio.h>
int main() {
    int bal = 0, dep, wit, op;
    for(;;) {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: "); scanf("%d", &op);
        if (op == 1) printf("Current Balance: %.2f\n\n", (float)bal);
        else if (op == 2) {
            printf("Enter amount to deposit: "); scanf("%d", &dep);
            bal += dep;
            printf("\n");
        }
        else if (op == 3) {
            printf("Enter amount to withdraw: "); scanf("%d", &wit);
            bal -= wit;
            printf("Withdrawal successful.\n\n");
        }
        else {
            printf("Thank you for using the ATM.\n");
            break;
        }
    }
    return 0;
}