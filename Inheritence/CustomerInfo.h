
// CustomerInfo.h
#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

/*******************************************************************************
 *                              Library References 
*/
#include "PersonInfo.h"
#include <string>

using namespace std;

// CustomerInfo class declaration
// *****************************************************************************
class CustomerInfo : public PersonInfo {

  private:
    int  customerNumber;
    bool mailingList;

  public:
    // Default constructor
    CustomerInfo();

    // Constructor 
    CustomerInfo(string lastName, string firstName, string address, string city, 
                 string state, string zipCode, string phoneNumber, int customerNumber, 
                 bool mailingList); 

    // Copy constructor
    CustomerInfo(const CustomerInfo& customer);
            
    // Destructor
    virtual ~CustomerInfo() {};

    // Mutator functions
    void setCustomerNumber(int customerNumber);
    void setMailingList   (bool mailingList);

    // Accessor functions
    int  getCustomerNumber() const;
    bool getMailingList()    const; 

    // Overloaded functions
    CustomerInfo& operator=(const CustomerInfo& customer);
};

#endif