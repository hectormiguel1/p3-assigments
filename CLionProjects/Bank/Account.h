#include "owner.h"

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

typedef struct Account Account;

const int INSUFFICIENT_FOUNDS;
const int SUCCESS;

Account* new_Account(Owner* owner, double initialBalance);
void destroy_Account (Account* self);
void deposit(Account* self, double amount);
int withdraw(Account* self, double amount);
int initTransfer(Account* srcAccount, Account* destAccount, double amount);
char(* toString(Account* self));



#endif //BANK_ACCOUNT_H
