
// CustomerInfo.cpp
#include "CustomerInfo.h"
#include <string>

/*******************************************************************************
* Name:        CustomerInfo()
* Description: CustomerInfo() is the default constructor for class CustomerInfo.
*/
CustomerInfo::CustomerInfo() : PersonInfo() {
  this->setLastName      (" ");
  this->setFirstName     (" ");
  this->setAddress       (" ");
  this->setCity          (" ");
  this->setState         (" ");
  this->setZipCode       ("00000");
  this->setPhoneNumber   ("00000000000");
  this->setCustomerNumber(0);
  this->setMailingList   (false);
}

/*******************************************************************************
* Name:        CustomerInfo()
* Description: CustomerInfo() is a constructor for class CustomerInfo and is used 
*              to instantiate class PersonInfo member variables lastName, firstName, 
*              address, city, state, zipCode, phoneNumber and class CustomerInfo 
*              memeber variables customerNumber and mailingList.
*/
CustomerInfo::CustomerInfo(string lastName, string firstName, string address, string city, 
              string state, string zipCode, string phoneNumber, int customerNumber, 
              bool mailingList) 
              : PersonInfo(lastName, firstName, address, city, state, zipCode, phoneNumber) {
  this->setLastName      (lastName);
  this->setFirstName     (firstName);
  this->setAddress       (address);
  this->setCity          (city);
  this->setState         (state);
  this->setZipCode       (zipCode);
  this->setPhoneNumber   (phoneNumber);
  this->setCustomerNumber(customerNumber);
  this->setMailingList   (mailingList);
}

/*******************************************************************************
* Name:        CustomerInfo()
* Description: CustomerInfo() is a copy constructor for class CustomerInfo.
*/
CustomerInfo::CustomerInfo(const CustomerInfo& customer) : 
              PersonInfo(customer) {
  *this = customer; 
}

/*******************************************************************************
* Name:        setCustomerNumber()
* Description: Function setCustomerNumber() accepts an integer and sets it as 
*              this object's customberNumber value.
*/
void CustomerInfo::setCustomerNumber(int customerNumber) {
  this->customerNumber = customerNumber;
}

/*******************************************************************************
* Name:        setMailingList()
* Description: Function setMailingList() accepts a boolean and sets it as this 
*              object's mailingList status.
*/
void CustomerInfo::setMailingList(bool mailingList) {
  this->mailingList = mailingList;
}

/*******************************************************************************
* Name:        getCustomerNumber()
* Description: Function getCustomerNumber() returns this object's customerNumber.
*/
int  CustomerInfo::getCustomerNumber() const {
  return this->customerNumber;
}

/*******************************************************************************
* Name:        getMailingList()
* Description: Function getMailingList() returns this object's mailing list status.
*/
bool CustomerInfo::getMailingList() const {
  return this->mailingList;
}

/*******************************************************************************
* Name:        operator=()
* Description: Function operator=() is a overloaded version of the = operator 
*              and assigns a CustomerInfo object to this one and returns a refernece 
*              to this object.
*/
CustomerInfo& CustomerInfo::operator =(const CustomerInfo& customer) {
  this->setLastName      (customer.getLastName());
  this->setFirstName     (customer.getFirstName());
  this->setAddress       (customer.getAddress());
  this->setCity          (customer.getCity());
  this->setState         (customer.getState());
  this->setZipCode       (customer.getZipCode());
  this->setPhoneNumber   (customer.getPhoneNumber());
  this->setCustomerNumber(customer.getCustomerNumber());
  this->setMailingList   (customer.getMailingList());
  return *this;
}