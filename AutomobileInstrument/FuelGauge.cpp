#include "FuelGauge.h"
#include <iostream> 

using namespace std;

/*******************************************************************************
* Name:        FuelGauge()
* Description: FuelGauge() is the default constructor for class FuelGauge. It has 
*              no parameters and initializes variables to 0.
*/
FuelGauge::FuelGauge() {
  setGallonsOfFuel(0); // Set fuel
}

/*******************************************************************************
* Name:        FuelGauge(int gallons)
* Description: FuelGauge(int gallons) is a constructor for class FuelGauge. It 
*              has one integer parameter named gallons which is used to initialize 
*              member variable gallonsOfFuel to gallon's value.
*/
FuelGauge::FuelGauge(int gallons) {
  setGallonsOfFuel(gallons); // Set fuel
}

/*******************************************************************************
* Name:        FuelGauge(const FuelGauge &fuelGauge)
* Description: FuelGauge(const FuelGauge &fuelGauge) is a copy constructor for 
*              class FuelGauge. It has one parameter representing a FuelGauge 
*              object refernce which is used to copy from.
*/
FuelGauge::FuelGauge(const FuelGauge &fuelGauge) {
  setGallonsOfFuel(fuelGauge.getGallonsOfFuel());
}

/*******************************************************************************
* Name:         setFuel()
* Description:  Function setFuel takes an integer value as an argument, validates
*               said argument, and if accepted will add that many gallons of fuel 
*               to the car. If not accepted, the user is notified.
*/
void FuelGauge::setGallonsOfFuel(int gallons) {
  if (gallons >= 0 && gallons <= 22) {
    this->gallonsOfFuel = gallons; // Set fuel to gallons 
  }
  else { // Notify user
    cout << "This vehicle can only store 22 gallons of fuel!" << endl;
  }
}

/*******************************************************************************
* Name:         incrementFuelByOne()
* Description:  Function incrementFuelByOne will first check and see if the current 
*               gallonsOfFuel is below 22 gallons of fuel. If it is, it will 
*               increment gallonsOfFuel by one. If it is not, the user is notified.
*/
void FuelGauge::incrementGallonsOfFuelByOne() {
  if (this->gallonsOfFuel < 22) {
    this->gallonsOfFuel++; // Increment gallonsOfFuel by one
  }
  else {
    cout << "This vehicle's fuel tank holds no more than 22 gallons." << endl;
  }
}

/*******************************************************************************
* Name:         decrementFuelByOne()
* Description:  Function decrementFuelByOne will first check and see if the current 
*               amount of fuel is above 0 gallons of fuel. If it is, it will 
*               decrement gallonsOfFuel by one.
*/
void FuelGauge::decrementGallonsOfFuelByOne() {
  if (this->gallonsOfFuel > 0) {
    this->gallonsOfFuel--; // Decrement gallonsOfFuel by one
  }
  else {
    cout << "This vehicle's fuel tank holds no more fuel." << endl;
  }
}