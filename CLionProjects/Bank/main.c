#include <stdio.h>
#include <stdlib.h>
#include "owner.h"
#include "Account.h"

/**typedef struct Date
{
    int month;
    int day;
    int year;
} Date; */

/*typedef struct Owner
{
    char firstName[20];
    char middleInitial;
    char lastName[20];
    char secondLastName[20];
    struct Date *dob;
    char identifier[20];
} Owner; */


int main() {
    Owner *hector = new_Owner_IntDate("Hector", "Ramirez", "Hispanic", 12, 12, 12);
    Account *savings = new_Account(hector, 0);
    char * accountString = accountToString(savings);
    printf("%s", accountString);
    free(accountString);
    destroy_Account(savings);


}