#include <iostream>
#include "Owner.h"
#include "Date.h"

using namespace std;
int main() {
    string address = "861 E 41S ST Hialeah, FL 33013";
    Date DOB = Date(07,15,1997);
    string wrongAddress = "NONE";
    Owner Hector = Owner("Hector", "Ramirez", address, "Dual1010", DOB);
    cout << Hector.toString() << endl;
    cout << Hector.toString("Dual1010") << endl;
    cout << "Trying to change identifier: " << Hector.changeIdentifier(DOB,wrongAddress,"Dual2020");

    if(Hector.changeIdentifier(DOB,wrongAddress,"Dual2020"))
        cout << "Success" << endl;
    else
        cout << "Failure" << endl;
}