//
// Created by hector on 9/4/19.
//

#ifndef BANK_DATE_H
#define BANK_DATE_H
#include <string>

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    Date getDate();
    std::string dateToString();
    bool operator==(const Date& otherDate) ;
    bool operator!=(const Date& otherDate);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

};
static bool compare(Date aDate, Date otherDate);



#endif //BANK_DATE_H
