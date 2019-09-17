#include <stdio.h>
#include <string.h>
#include "owner.h"
#include "time.h"

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


int main()
{
    /*Date regularDate;
    regularDate.day = 12;
    regularDate.month = 12;
    regularDate.year = 1999;

    Owner hector;
    hector.dob = &regularDate;
    strcpy(hector.firstName,"Hector");
    hector.middleInitial = 'M';
    strcpy(hector.lastName,"Ramirez");
    strcpy(hector.secondLastName,"");
    strcpy(hector.identifier,"Hispanic");

    printf("Name: %s %c %s %s\n",hector.firstName, hector.middleInitial, hector.lastName, hector.secondLastName);
    printf ("DOB: %d/%d/%d \n",hector.dob->month,hector.dob->day,hector.dob->year);
    printf("Identifier: %s", hector.identifier); */

    Owner *hector = new_Owner_IntDate("Hector","Ramirez","Hispanic", 12,12,12);
    printf("Owner Object stored at: %p\n",hector);
    printf("Object first name is: %s \n",&hector);
    printf("Object DOB: %s \n", getDate(hector));
    setFName(hector,"Luis");
    printf("Object first name is: %s \n",getFirstName(hector));
    destroy_Owner(hector);

    time_t now;

    struct tm *local = localtime(&now);

}