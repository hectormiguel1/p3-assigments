
#ifndef BANK_OWNER_H

#define BANK_OWNER_H

#include "date.h"

typedef struct Owner Owner;

Owner *new_Owner_DatePointer(char fName[], char lName[], char identifier[], Date *dob);
Owner *new_Owner_IntDate(char fName[], char lName[], char identifier[], int month, int day, int year);

char *getFirstName(Owner *self);
char *getLastName(Owner *self);
char *getIdentifier(Owner *self);
char *getDate(Owner *self);
void setFName(Owner *self, char newFName[]);
void setLName(Owner *self, char newLName[]);
void setIdentifier(Owner *self, char newIdentifier[]);
void updateDate(Owner *self, Date *newDate);
void destroy_Owner(Owner *self);

#endif //BANK_OWNER_H
