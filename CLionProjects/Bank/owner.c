#include "owner.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "date.h"

typedef struct Owner
{
    char *fName;
    char *lName;
    Date *dateOfBirth;
    char *identifier;
}Owner;

Owner *new_Owner_DatePointer(char fName[], char lName[], char identifier[], Date *dob)
{
    Owner *new = (Owner*)malloc(sizeof(Owner));
    new->fName = malloc(strlen(fName));
    new->lName = malloc(strlen(lName));
    new->identifier = malloc(strlen(identifier));
    new->dateOfBirth = dob;
    strcpy(new->fName,fName);
    strcpy(new->lName, lName);
    strcpy(new->identifier, identifier);
    printf("First Name: %s, Last Name: %s \n", fName, lName);
    return new;
}
Owner *new_Owner_IntDate(char fName[], char lName[], char identifier[], int month, int day, int year)
{
    Owner *new = (Owner*)malloc(sizeof(Owner));
    new->fName = malloc(strlen(fName));
    new->lName = malloc(strlen(lName));
    new->identifier = malloc(strlen(identifier));
    new->dateOfBirth = new_Date(month,day,year);
    strcpy(new->fName,fName);
    strcpy(new->lName, lName);
    strcpy(new->identifier, identifier);
    printf("First Name: %s, Last Name: %s \n", fName, lName);
    return new;
}

char *getFirstName(Owner *self)
{

    return self->fName;
}

char *getLastName(Owner *self)
{
    return self->lName;
}

char *getIdentifier(Owner *self)
{
    return self->identifier;
}
void destroy_Owner(Owner *self)
{
    destroy_Date(self->dateOfBirth);
    free(self->identifier);
    free(self->fName);
    free(self->lName);
    free(self);

}
void setFName(Owner *self, char newFName[])
{
    free(self->fName);
    self->fName = malloc(strlen(newFName));
    strcpy(self->fName, newFName);
}
void setLName(Owner *self, char newLName[])
{
    free(self->lName);
    self->lName = malloc(strlen(newLName));
    strcpy(self->lName, newLName);
}
void setIdentifier(Owner *self, char newIdentifier[])
{
    free(self->identifier);
    self->fName = malloc(strlen(newIdentifier));
    strcpy(self->fName, newIdentifier);
}
char *getDate(Owner *self)
{
    return dateToString(self->dateOfBirth);
}
void updateDate(Owner *self,Date *newDate)
{
    destroy_Date(self->dateOfBirth);
    self->dateOfBirth = newDate;
}