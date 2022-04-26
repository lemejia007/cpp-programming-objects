#include "Odometer.h"
#include <iostream>

using namespace std;

/*******************************************************************************
* Name:         Odometer()
* Description:  Odometer() is the default constructor for class Odometer. It has 
*               no parameters and initializes variables to 0.
*/
Odometer::Odometer() {
  setCurrentMileage(0);       // Set currentMileage 
  this->fuelGauge.setGallonsOfFuel(0); // Set fuel in fuelGauge object
}

/*******************************************************************************
* Name:         Odometer(int)
* Description:  Odometer(int) is an overloded constructor for class Odometer. It 
*               has one parameter representing mileage which it uses to initialize 
*               member variable currentMileage to the parameter's value. The fuel 
*               in the FuelGauge object is set to 0.
*/
Odometer::Odometer(int mileage) {
  setCurrentMileage(mileage); // Set currentMileage
  this->fuelGauge.setGallonsOfFuel(0); // Set fuel in fuelGauge object
}

/*******************************************************************************
* Name:         Odometer(int, int)
* Description:  Odometer(int, int) is an overloded constructor for class Odometer. 
*               It has two parameters representing mileage and fuel. Mileage is 
*               is used to initialize member variable currentMileage to mileage's 
*               value and fuel is used to set the fuel in the FuelGauge object to 
*               fuel's value. 
*/
Odometer::Odometer(int mileage, int fuel) {
  setCurrentMileage(mileage);    // Set currentMileage
  this->fuelGauge.setGallonsOfFuel(fuel); // Set fuel in fuelGauge object
}

/*******************************************************************************
* Name:         Odometer(const Odometer &odometer)
* Description:  Odometer(const Odometer &odometer) is a copy constructor for class 
*               Odometer. It has one parameter representing an Odometer object 
*               reference which it uses to copy from. 
*/
Odometer::Odometer(const Odometer &odometer) {
  setCurrentMileage(odometer.getCurrentMileage());
  this->fuelGauge.setGallonsOfFuel(odometer.fuelGauge.getGallonsOfFuel());
}

/*******************************************************************************
* Name:         setCurrentMileage()
* Description:  Function setCurrentMileage takes an integer value as an argument, 
*               validates said argument, and if accepted will set the vehicle's 
*               current mileage to said argument. If not accepted, the user is 
*               notified.
*/
void Odometer::setCurrentMileage(int mileage) {
  if (mileage >= 0 && mileage < 1000000) {
    this->currentMileage = mileage; // Set currentMileage to mileage
  }
  else { // Notify user
    cout << "Mileage can not be less than zero or greater than 1,000,000." << endl;
  }
}

/*******************************************************************************
* Name:         incrementCurrentMileageByOne()
* Description:  Function incrementCurrentMileageByOne will first check to see if 
*               the current mileage is less than 1,000,000. If it is, it will 
*               increment currentMileage by one. If the current mileage exceeds 
*               999,999 then current mileage will reset to 0.
*/
void Odometer::incrementCurrentMileageByOne() {
  if (this->currentMileage < 1000000) {
    this->currentMileage++; // Increment currentMileage by one
    if (this->currentMileage > 999999) { // If currentMileage exceeds 999,999
      this->currentMileage = 0; // Reset currentMileage back to 0
    }
  }
}

/*******************************************************************************
* Name:         incrementFuelByOne()
* Description:  Function incrementFuelByOne will first check to see if gallonsOfFuel 
*               in the FuelGauge object is less than 22 gallons. If it is, the 
*               FuelGauge object's gallonsOfFuel is incremented by one. If it is not,
*               then the tank is still full and the user is notified. 
*/
void Odometer::incrementGallonsOfFuelByOne() {
  if (this->fuelGauge.getGallonsOfFuel() < 22) {
    this->fuelGauge.incrementGallonsOfFuelByOne();
  }
  else {
    cout << "This vehicle's tank is already full!" << endl;
  }
}

/*******************************************************************************
* Name:         decrementFuelByOne()
* Description:  Function decrementFuelByOne will first check to see if gallonsOfFuel 
*               in the FuelGauge object is greater than 0 gallons. If it is, the 
*               FuelGauge object's gallonsOfFuel is decremented by one. If it is 
*               not greater than 0 the tank is already empty and the user is 
*               notified. 
*/
void Odometer::decrementGallonsOfFuelByOne() {
  if (this->fuelGauge.getGallonsOfFuel() > 0) {
    this->fuelGauge.decrementGallonsOfFuelByOne();  
  }
  else {
    cout << "This vehicle's tank is already empty!" << endl;
  }
}