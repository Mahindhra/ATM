/*# ATM
An ATM program is software that runs on a self-service Automated Teller Machine (ATM) to allow users to perform banking transactions like cash withdrawal, balance inquiries, and deposits by interacting with the machine's hardware through a card and a Personal Identification Number (PIN).*/
#include<stdio.h>
unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction='y';
void main()
{
    while(pin!=1520)
    {
        printf("Enter your secret PIN number:");
        scanf("%d",&pin);
        if(pin!=1520)
        printf("Please enter valid paswword \n");
    }
    do
    {
        printf("*Welcome to ATM Services******* \n");
        printf("1. Check Balance \n");
        printf("2. Withdraw Cash \n");
        printf("3. Deposit Cash \n");
        printf("4. Quit \n");
        printf("??** \n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("\n Your Balance in Rs: %lu", amount);
                break;
            case 2:
                printf("\n Enter the amount to withdraw: ");
                scanf("%lu", &withdraw);
                if (withdraw % 100 !=0)
                {
                    printf("\n Please enter the amount in multiple of 100");
                }
                else if (withdraw > (amount - 500))
                {
                    printf("\n Insufficent Balance");
                }
                else
                {
                    amount = amount - withdraw;
                    printf("\n\n Please collect Cash");
                    printf("\n Your current Balance is %lu",amount);
                }
                break;
            case 3:
                printf("\n Enter amount to Deposit");
                scanf("%lu",&deposit);
                            amount = amount + deposit;
                printf("Your Balance is %lu",amount);
                break;
            case 4:
                printf("\n Thank You Using ATM");
                break;
            default:
                printf("\n Invalid Choice");
        }
        printf("\n\n\n Do you wish to have another Transaction?(y/n):\n");
        fflush(stdin);
        scanf("%c", &transaction);
        if(transaction == 'n' || transaction == 'N')
                    k=1;
    }
    while(!k);
    printf("\n\n Thanks for using out ATM Service");
}

