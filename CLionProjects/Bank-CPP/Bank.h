//
// Created by hector on 9/4/19.
//

#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <strings.h>
#include <string>
#include "Account.h"

class Bank {
private:
    long numberOfAccounts;
    Account accounts[];

public:
    Bank(std::string name);
    bool addAccount(std::string accHoldFName, std::string accHoldLName);
    bool internalTransfer(Account *sourceAccount, Account *destinAccount, double amount);
    bool externalTransfer (Account *sourceAccount, Bank *destinBank, Account *desinAccount, double amount);
};


#endif //BANK_BANK_H
