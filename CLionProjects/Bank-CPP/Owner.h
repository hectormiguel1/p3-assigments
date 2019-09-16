//
// Created by hector on 9/4/19.
//

#ifndef BANK_OWNER_H
#define BANK_OWNER_H
#define DEFAULT 0

#include <strings.h>
#include "string"
#include "Date.h"


using namespace std;


class Owner {

private:
    string fName;
    string lName;
    Date dob;
    string streetAddress;
    string identifier; //SSN
public:
    Owner(string fName, string lName,string streetAddress, string identifier,Date dob);

    bool updateProfile(string streetAddress, string password);

    string getName();

    Date getDOB(string identifier="");

    string getAddress(string password="");

    bool verify(string password="");

    bool changeIdentifier(Date dob, string address, string newIdentifier);

    string toString(string password="");

    string getPassword(string password);



};




#endif //BANK_OWNER_H
