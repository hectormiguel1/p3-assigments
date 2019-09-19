#include "Account.h"
#include "date.h"
#include <stdlib.h>
#include <stdio.h>
#include "string.h"

const int INSUFFICIENT_FOUNDS = -1;
const int SUCCESS = 0;

typedef struct Account
{
    Owner* owner;
    Date* DateCreated;
    double accountBalance;
}Account;

Account* new_Account(Owner* owner, double initBalance)
{
    Account* tmp = (Account*)malloc(sizeof(Account));
    tmp->owner = owner;
    tmp->accountBalance = initBalance;
    tmp->DateCreated = getTodayDate();

    return tmp;
}

void destroy_Account(Account* self)
{
    free(self->owner);
    free(self->DateCreated);
    free(self);
}

void deposit(Account* self, double amount)
{
    self->accountBalance += amount;
}

int withdraw(Account* self, double amount)
{
    if(self->accountBalance < amount)
    {
        return INSUFFICIENT_FOUNDS;
    }
    else
    {
        self->accountBalance -= amount;
        return SUCCESS;
    }
}
int initTransfer(Account* srcAccount, Account* destAccount, double amount)
{
    if(srcAccount->accountBalance < amount)
    {
        return INSUFFICIENT_FOUNDS;
    }
    else
    {
        withdraw(srcAccount, amount);
        deposit(destAccount, amount);
        return SUCCESS;
    }
}

char (*accountToString(Account* self))
{
    char accountString[1000];
    sprintf(accountString,"Owner: %s %s"
           "\nDOB: %s"
           "\nAccount Balance: %.2f"
                          ,getFirstName(self->owner), getLastName(self->owner)
                          ,getDate(self->owner)
                          ,self->accountBalance);
    char *accountStringPointer = (char*) malloc(sizeof(accountString));
    strcpy(accountStringPointer,accountString);
    return accountStringPointer;
}

