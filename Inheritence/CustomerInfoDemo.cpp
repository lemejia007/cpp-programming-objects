
// CustomerInfoDemo.cpp 
/*******************************************************************************
 *                       CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia 
 * ASSIGNMENT: Inheritence
 * DUE DATE:   05/25/2022
 *
 */

/*******************************************************************************
 *                              Library References 
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "PersonInfo.h"
#include "CustomerInfo.h"

using namespace std; 

/*******************************************************************************
 *                                  Main Program
 * Description: This is simple program in which the user is allowed to enter all 
 *              pertinent information beloning to a CustomerInfo class object and 
 *              will then output the information entered. (This is an interactive 
 *              demonstration of an object of the CustomerInfo class.)
*/
int main() {

  // Create a CustomerInfo object
  CustomerInfo customer1; 

  // Prompt user for last name
  string lastName;
  cout << "Enter the customer's last name: ";
  getline(cin, lastName);

  // Set customer's last name
  customer1.setLastName(lastName);

  // Prompt user for first name
  string firstName;
  cout << "\nEnter the customer's first name: ";
  getline(cin, firstName);

  // Set customer's first name
  customer1.setFirstName(firstName);

  // Prompt user for address
  string address;
  cout << "\nEnter the customer's address: ";
  getline(cin, address);

  // Set customer's address
  customer1.setAddress(address);

  // Prompt user for city
  string city;
  cout << "\nEnter the customer's city of residence: ";
  getline(cin, city);

  // Set customer's city
  customer1.setCity(city);

  // Prompt user for state
  string state;
  cout << "\nEnter the customer's state of residence: ";
  getline(cin, state);

  // Set customer's state
  customer1.setState(state);

  // Prompt user for zip code
  string zipCode;
  cout << "\nEnter the customer's zip code: ";
  getline(cin, zipCode);

  // Validate zip code
  while (zipCode.length() < 5 || zipCode.length() > 5) {
    cout << "\nZip code must be five digits\nEnter the customer's zip code: ";
    getline(cin, zipCode);
  }

  // Set customer's zip code
  customer1.setZipCode(zipCode);

  // Prompt user for phone number
  string phoneNumber;
  cout << "\nEnter the customer's phone number: ";
  getline(cin, phoneNumber);

  // Validate phone number
  while (phoneNumber.length() < 11 || phoneNumber.length() > 11) {
    cout << "\nPhone number must be 11 digits\nEnter the customer's phone number code: ";
    getline(cin, phoneNumber);
  }

  // Set customer's phone number
  customer1.setPhoneNumber(phoneNumber);

  // Prompt user for the customer's customer number
  int customerNumber;
  cout << "\nEnter the customer's customer number: ";
  cin >> customerNumber;

  // Set the customer's custoemr number
  customer1.setCustomerNumber(customerNumber);

  // Prompt user for the customer's mailing list preference
  int mailingList;
  cout << "\nWould the customer like to be on the mailing list?\nEnter 1 for yes or 2 for no: ";
  cin >> mailingList;

  // Set the customer's mailing list preference
  if(mailingList == 1) {
    customer1.setMailingList(true);
  }
  else if(mailingList == 2) {
    customer1.setMailingList(false);
  }

  // Display the customer's infomation
  cout << "==================================================" 
       << "\n         Customer Information\n"
       << "==================================================";

  cout << "\nCustomer Number: "   << customer1.getCustomerNumber() 
       << "\nLast name: "         << customer1.getLastName() 
       << "\nFirst name: "        << customer1.getFirstName()
       << "\nAddress: "           << customer1.getAddress() 
       << "\nCity: "              << customer1.getCity() 
       << "\nState: "             << customer1.getState() 
       << "\nZip code: "          << customer1.getZipCode() 
       << "\nPhone Number: "      << customer1.getPhoneNumber();
      if(customer1.getMailingList() == 1) {
        cout << "\nMailing List: Yes";
      } 
      else if(customer1.getMailingList() == 0) {
        cout << "\nMailing List: No";
      }

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
