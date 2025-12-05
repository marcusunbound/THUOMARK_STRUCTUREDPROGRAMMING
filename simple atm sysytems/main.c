#include <stdio.h>
#include <stdbool.h>

int balance = 55000;

bool login(int correctPin, int pinEntered)
{
    if (correctPin != pinEntered)
    {
        printf("Incorrect Pin! \n");
        return false;
    }
    printf("correct Pin! \n");
    return true;
}

int checkBalance()
{
    printf("balance: %d\n", balance);
    return balance;
}

int deposit(int depositAmt)
{
    return balance += depositAmt;
}

bool withdraw(int withdrawAmt)
{
    if (balance < withdrawAmt)
    {
        printf("Cannot withdraw more than available balance");
        return false;
    }
    balance -= withdrawAmt;
    return true;
}

void showAtmMenu()
{
    bool exited = false;
    while (!exited)
    {
        printf("Menu: \n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        int  optionSelected;
        scanf("%d", &optionSelected);

        switch (optionSelected)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            int depositAmt;
            printf("Enter deposit amount:\n");
            scanf("%d", &depositAmt);
            deposit(depositAmt);
            printf("New amount: %d\n", balance);
            break;
        case 3:
            int withdrawAmt;
            printf("Enter withdrawal amount:\n");
            scanf("%d", &withdrawAmt);
            withdraw(withdrawAmt);
            printf("New amount: %d\n", balance);
            break;
        case 4:
            exited = true;
            break;

        default:
            printf("Invalid option\n");
            exited = true;
            break;
        }
    }


}


int main()
{
    int correctPin = 9876;
    int pinEntered;
    printf("Enter pin: \n");
    scanf("%d", &pinEntered);

    bool isLoggedIn = login(correctPin, pinEntered);

    if (!isLoggedIn)
    {
        printf("Log in failed!\n");
        return 1;
    }

    showAtmMenu();
    withdraw(1234);
    printf("balance: %d\n", balance);

    return 0;
}
