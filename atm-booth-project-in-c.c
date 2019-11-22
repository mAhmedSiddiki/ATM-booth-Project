#include<stdio.h>
#include<conio.h>
long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
void main()
{

    while(pin!= 1111)
    {
        printf("\n\n\n\t\t\t============================================\n");
        printf("\t\t\tEnter your secret pin number:");
        scanf("%d",&pin);
        if(pin != 1111)
        {
            printf("Please enter valid password\n");
            printf("\t\t\t============================================\n");
        }
    }
    do
    {
        printf("\t\t\t==================================================\n");
        printf("\n\n\n\t\t\t============================================\n");
        printf("\t\t\t********** Welcome to ATM service **********\n");
        printf("\t\t\t*                                          *\n");
        printf("\t\t\t*  1. Check Balance                        *\n");
        printf("\t\t\t*  2. Withdraw cash                        *\n");
        printf("\t\t\t*  3. Deposit cash                         *\n");
        printf("\t\t\t*  4. Quit                                 *\n");
        printf("\t\t\t************ Enter Your Choice *************\n");
        printf("\t\t\t============================================\n");
        scanf("%d",&choice);
        system("cls");

        switch(choice)
        {
            case 1:
            printf("\n\n\n\t\t\t===============================================\n");
            printf("\t\t\tYOUR BALANCE IN TK: %lu ", amount);
            printf("\n\t\t\t===============================================\n");
            break;

            case 2:
            printf("\n\n\n\t\t\t===============================================\n");
            printf("\t\t\tENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu",&withdraw);
            printf("\t\t\t===============================================\n");
            if(withdraw % 500 != 0)
            {
                printf("\t\t\tPLEASE ENTER THE AMOUNT IN MULTIPLES OF 500\n");
            }
            else if(withdraw >(amount-500))
            {
                printf("\t\t\tINSUFFICENT BALANCE\n");
            }
            else
            {
                amount = amount - withdraw;
                printf("\t\t\tPLEASE COLLECT CASH\n");
                printf("\t\t\t===============================================\n");
                printf("\t\t\tYOUR CURRENT BALANCE %lu\n",amount);
            }
            printf("\t\t\t===============================================\n");
            break;

            case 3:
                printf("\n\n\n\t\t\t===============================================\n");
            printf("\t\t\tENTER THE AMOUNT TO DEPOSIT: ");
            scanf("%lu",&deposit);
            amount = amount + deposit;
            printf("\t\t\t===============================================\n");
            printf("\t\t\t        YOUR BALANCE IS: %lu",amount);
            printf("\n\t\t\t===============================================\n");
            break;
            printf("\t\t\t=======================================\n");
            case 4:
                printf("\n\n\n\t\t\t===============================================\n");
            printf("\t\t\t               THANK YOU USING ATM");
            printf("\n\t\t\t===============================================\n");
            break;
            default:
                {
                    printf("\n\n\n\t\t\t===============================================\n");
                    printf("\t\t\t              INVALID CHOICE\n");

                    printf("\t\t\t===============================================\n");
                }
        }
        printf("\n\n\n\t\t\tDO YOU WISH TO HAVE ANOTHER TRANSCATION ???  (y/n): \n");

        fflush(stdin);
        scanf("%c",&transaction);
         system("cls");
        if(transaction == 'n'|| transaction == 'N')
        {
            k=1;
        }
    }
        while(!k);
        {
            printf("\n\n\n\t\t\t===============================================\n");
            printf("\n\n \t\t\tTHANKS FOR USING OUR ATM SERVICE");
            printf("\t\t\t===============================================\n");
        }
        getch();
}
