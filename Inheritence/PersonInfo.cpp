
// PersonInfo.cpp
#include "PersonInfo.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
* Name:        PersonInfo()
* Description: PersonInfo() is the default constructor function for class 
               PersonInfo. 
*/
PersonInfo::PersonInfo() {
  this->lastName    = " ";
  this->firstName   = " ";
  this->address     = " ";
  this->city        = " ";
  this->state       = " ";
  this->zipCode     = "00000";
  this->phoneNumber = "00000000000";
}

/*******************************************************************************
* Name:        PersonInfo()
* Description: This version of PersonInfo() is the constructor for class 
               PersonInfo. This constructor has parameters for lastName, firstName, 
               address, city, state, zipcode, and phoneNumber, which it uses to 
               initialize mentioned variables.
*/
PersonInfo::PersonInfo(string lastName, string firstName, string address, string city, 
                       string state, string zipCode, string phoneNumber) {
  this->lastName    = lastName;
  this->firstName   = firstName;
  this->address     = address;
  this->city        = city;
  this->state       = state;
  this->zipCode     = zipCode;
  this->phoneNumber = phoneNumber;
}

/*******************************************************************************
* Name:        PersonInfo()
* Description: This version of PersonInfo() is a copy constructor for class 
               PersonInfo. 
*/
PersonInfo::PersonInfo(const PersonInfo &person) {
  *this = person;
}

/*******************************************************************************
* Name:        setLastName(string lastName)
* Description: setLastName() accepts a string and stores it in member variable 
               lastName.
*/
void PersonInfo::setLastName(string lastName) {
  this->lastName = lastName;
}

/*******************************************************************************
* Name:        setFirsttName(string firstName)
* Description: setfirstName() accepts a string and stores it in member variable 
               firstName.
*/
void PersonInfo::setFirstName(string firstName) {
  this->firstName = firstName;
}

/*******************************************************************************
* Name:        setAddress(string address)
* Description: setAddress() accepts a string and stores it in member variable 
               address.
*/
void PersonInfo::setAddress(string address) {
  this->address = address;
}

/*******************************************************************************
* Name:        setCity(string city)
* Description: setCity() accepts a string and stores it in member variable 
               city.
*/
void PersonInfo::setCity(string city) {
  this->city = city;
}

/*******************************************************************************
* Name:        setState(string state)
* Description: setState() accepts a string and stores it in member variable 
               state.
*/
void PersonInfo::setState(string state) {
  this->state = state;
}

/*******************************************************************************
* Name:        setZipCode(int zipcode)
* Description: setZipCode() will check to see if the argument passed is five 
*              digits. If it is, it will accept the integer argument and store it 
*              in member variable zipCode. Else, zipCode is set to 00000. 
*/
void PersonInfo::setZipCode(string zipCode) {
  if(zipCode.length() == 5) {
    this->zipCode = zipCode;
  }
  else {
    this->zipCode = "00000";
  }
}

/*******************************************************************************
* Name:        setPhoneNumber(int phoneNumber)
* Description: setPhoneNumber() will check to see if the argument passed is 11 
*              digits. If it is, it will accept the integer argument and store it 
*              in member variable phoneNumber. Else, phoneNumber is set to 00000000000.
*/
void PersonInfo::setPhoneNumber(string phoneNumber) {
  if(phoneNumber.length() == 11) {
    this->phoneNumber = phoneNumber;
  }
  else {
    this->phoneNumber = "00000000000";
  }
}

/*******************************************************************************
* Name:        getLastName()
* Description: Function getLastName() returns this object's last name.
*/
string PersonInfo::getLastName() const {
  return this->lastName;
}

/*******************************************************************************
* Name:        getFirstName()
* Description: Function getFirstName() returns this object's first name.
*/
string PersonInfo::getFirstName() const {
  return this->firstName;
}

/*******************************************************************************
* Name:        getAddress()
* Description: Function getAddress() return's this object's address.
*/
string PersonInfo::getAddress() const {
  return this->address;
}

/*******************************************************************************
* Name:        getCity()
* Description: Function getCity() returns this object's city.
*/
string PersonInfo::getCity() const {
  return this ->city;
}

/*******************************************************************************
* Name:        getState()
* Description: Function getState() returns this object's state.
*/
string  PersonInfo::getState() const {
  return this->state;
}

/*******************************************************************************
* Name:        getZipCode()
* Description: Function getZipCode() returns this object's zip code.
*/
string PersonInfo::getZipCode() const {
return this->zipCode;
}

/*******************************************************************************
* Name:        getPhoneNumber()
* Description: Function getPhoneNumber() returns this objects's phone number.
*/
string PersonInfo::getPhoneNumber() const {
  return this->phoneNumber;
}

/*******************************************************************************
* Name:        operator =()
* Description: Function operator =() is a overloaded version of the = operator 
*              and assigns a PersonInfo object to this one and returns a refernece 
*              to this object.
*/
PersonInfo& PersonInfo::operator =(const PersonInfo& person) {
  this->setLastName   (person.getLastName());
  this->setFirstName  (person.getFirstName());
  this->setAddress    (person.getAddress());
  this->setCity       (person.getCity());
  this->setState      (person.getState());
  this->setZipCode    (person.getZipCode());
  this->setPhoneNumber(person.getPhoneNumber());
  return *this;
}