//
// Created by hector on 9/4/19.
//

#include "Owner.h"

#include <utility>
#include "Date.h"

#define DEFAULT_DATE Date(DEFAULT, DEFAULT,DEFAULT)
#define SECURITY_MESSEAGE "for security reasons, this information has been hidden \nPlease call this function with Owner password to print sensitive data."


/**
 * Used to construct the owner object, containing the information for the account owner.
 * @param fName : Owner first name;
 * @param lName : Owner last name;
 * @param month : Owner month date of birth
 * @param day   : Owner day date of birth
 * @param year : Owner year of birth
 * @param streetAddress  : Owner street Address
 * @param identifier  : Identifier for security reasons
 */
Owner::Owner(string fName, string lName, string streetAddress, string identifier,Date dob) : dob(dob) {
    this->fName = std::move(fName);
    this->lName = std::move(lName);
    this->streetAddress = std::move(streetAddress);
    this->identifier = std::move(identifier);
}
/**
 * Used to verify the owner before a tasks can be comepleated on th account the Owner holds
 * @param password : unique idientifier known to the owner
 * @return : true if the owner has been verifed, false otherwise.
 */
bool Owner::verify(string password) {
    return !(password != this->identifier);
}
/**
 * updates the Owner address, checks to make sure that the user is verified before updating information
 * @param newAddress : new address to be set
 * @param password : identifier, used to make sure that the user is the Owner
 * @return true, if profile updated successfully, false if the user was not verified.
 */
bool Owner::updateProfile(string newAddress, string password)
{
    if(!this->verify(password))
        return false;
    else
    {
        this->streetAddress = std::move(newAddress);
    }
}

/**
 * Returns the owners first name and last name as one full name string
 * @return full name string
 */
string Owner::getName()
{
    string fullName = fName + " " + lName;
    return fullName;
}

/**
 * Getter for the Owner street address
 * @param password
 * @return if the Owner is verified, return their street address, otherwise, return an empty address in error
 */
string Owner::getAddress(string password) {
    if(this->verify(password))
        return streetAddress;
    else
        return SECURITY_MESSEAGE;
}
/**
 * If the user has been verified, return the users date of birth, otherwise, return a non-descriptive default date.
 * @param identifier : identifier
 * @return dob if user is identified, 0/0/0 if not identified
 */
Date Owner::getDOB(string identifier) {
    if (!this->verify(identifier))
        return DEFAULT_DATE;
    else
        return dob;
}
/**
 * Updates the identifier incase the owner forgot or wiches to change it
 * @param dob : Owner date of birth
 * @param address : owner address on file
 * @param newIdentifier : new identifer
 * @return : true, if successfull, false otherwise
 */
bool Owner::changeIdentifier(Date dob, string address, string newIdentifier) {
    if (this->dob == dob && streetAddress == address)
        this->identifier = newIdentifier;
    else
        return false;
}

string Owner::toString(string password) {
    return {
            "Owner name: " + getName() +
            "\nOwner DOB: " + getDOB(password).dateToString() +
            "\nOwner Address: " + getAddress(password) +
            "\nOwner Password: " + getPassword(password)
    };
}

string Owner::getPassword(string password) {
    if(this->verify(password))
        return identifier;
    else
        return SECURITY_MESSEAGE;
}





