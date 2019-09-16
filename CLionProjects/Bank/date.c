#include "date.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int month;
    int day;
    int year;
}Date;

Date *new_Date(int month, int day, int year)
{
    Date *new = (Date *) malloc(sizeof(Date));
    new->month = month;
    new->day = day;
    new->year = year;
    return new;
}

char *dateToString(Date *self)
{
    char stringDate[10];
    sprintf(stringDate,"%d/%d/%d",self->month,self->day,self->year);
    char *pointerToDate = malloc(strlen(stringDate));
    strcpy(pointerToDate,stringDate);
    return pointerToDate;
}

void destroy_Date(Date *self)
{
    free(self);
}