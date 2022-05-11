
// PersonInfo.h
#ifndef PERSONINFO_H
#define PERSONINFO_H

/*******************************************************************************
 *                              Library References 
*/
#include <string>

using namespace std; 

// PersonInfo class declaration
// *****************************************************************************
class PersonInfo {

  private:
    string lastName,
           firstName,
           address,
           city,
           state,
           zipCode,
           phoneNumber;

  public:
    // Default constructor
    PersonInfo();
    
    // Constructor
    PersonInfo(string lastName, string firstName, string address, string city, 
               string state, string zipCode, string phoneNumber);
    
    // Copy constructor
    PersonInfo(const PersonInfo& person);

    // Destructor
    virtual ~PersonInfo() {};

    // Mutator functions
    void setLastName   (string lastName);
    void setFirstName  (string firstName);
    void setAddress    (string address);
    void setCity       (string city);
    void setState      (string state);
    void setZipCode    (string zipcode);
    void setPhoneNumber(string phoneNumber); 

    // Accessor functions
    string getLastName()    const;
    string getFirstName()   const;
    string getAddress()     const;
    string getCity()        const;
    string getState()       const;
    string getZipCode()     const;
    string getPhoneNumber() const;

    // Overloaded functions
    PersonInfo& operator =(const PersonInfo& person);

};
#endif
