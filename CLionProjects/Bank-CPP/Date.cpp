//
// Created by hector on 9/4/19.
//

#include "Date.h"

/**
 * Constructs a date object on which to store Dates
 * @param day
 * @param month
 * @param year
 */
Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

/**
 * Returns the current Date as a pointer to this object
 * @return pointer to this object
 */
Date Date::getDate() {
    return *this;
}

/**
 * Converts a month day year variables and returns the MM/DD/YYYY string
 * @return date String in format MM/DD/YY
 */
std::string Date::dateToString()
{
   return (std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year));
}

bool Date::operator==(const Date &otherDate) {
    return compare(*this,otherDate);
}

bool Date::operator!=(const Date &otherDate) {
    return !(compare(*this,otherDate));
}


static bool compare(Date aDate, Date otherDate) {
    return aDate.getYear() == otherDate.getYear() &&
    aDate.getMonth() == otherDate.getMonth() &&
    aDate.getDay() == otherDate.getDay();
}
