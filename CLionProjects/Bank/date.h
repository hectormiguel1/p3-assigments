//
// Created by hectorramirez on 9/12/19.
//
#ifndef BANK_DATE_H
#define BANK_DATE_H
typedef struct Date Date;

Date *new_Date(int month, int day, int year);
void destroy_Date(Date *self);
char *dateToString(Date *self);
static Date* getTodayDate();

#endif //BANK_DATE_H
