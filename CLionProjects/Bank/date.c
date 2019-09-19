#include "date.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "time.h"

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
    char *pointerToDateString = malloc(strlen(stringDate));
    strcpy(pointerToDateString,stringDate);
    return pointerToDateString;
}

void destroy_Date(Date *self)
{
    free(self);
}
//NEEDS TO BE IMPROVED, not Working correctly
Date* getTodayDate()
{
    time_t now;
    struct tm *local = localtime(&now);

    int day = local->tm_mday;
    int month = local->tm_mon + 1;
    int year = local ->tm_year + 1900;

    return new_Date(month,day,year);
}