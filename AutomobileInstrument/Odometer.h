#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"

// Odometer class declaration
class Odometer {

  private:
    int       currentMileage; // Current vehicle mileage
    FuelGauge fuelGauge;      // FuelGuage object 

  public:
    // Default constructor 
    Odometer();

    // Overloaded constructor
    Odometer(int mileage);

    // Overloaded constructor
    Odometer(int mileage, int fuel);

    // Copy constructor
    Odometer(const Odometer &odometer);

    // Destructor
    virtual ~Odometer() {};

    // Mutator functions
    void setCurrentMileage(int mileage); // Set currentMileage 

    void incrementCurrentMileageByOne(); // Increment currentMileage by one

    void incrementGallonsOfFuelByOne(); // Increment gallonsOfFuel by one

    void decrementGallonsOfFuelByOne(); // Decrement gallonsOfFuel by one

    int getGallonsOfFuel() const {
      return this->fuelGauge.getGallonsOfFuel(); // Get gallonsOfFuel
    } 

    // Accessor function
    int getCurrentMileage() const {
      return this->currentMileage; // Return currentMileage
    }
};
#endif