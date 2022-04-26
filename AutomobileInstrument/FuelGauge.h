#ifndef FUELGAUGE_H
#define FUELGAUGE_H

// FuelGauge class declaration
class FuelGauge {

  private:
    int gallonsOfFuel; // Amount of fuel in gallons

  public:
    // Default constructor
    FuelGauge();

    // Constructor
    FuelGauge(int gallons);

    // Copy constructor
    FuelGauge(const FuelGauge &fuelGauge);

    // Destructor
    virtual ~FuelGauge() {};

    // Mutator functions
    void setGallonsOfFuel(int gallons); // Set gallonsOfFuel

    void incrementGallonsOfFuelByOne(); // Increment gallonsOfFuel by one
    
    void decrementGallonsOfFuelByOne(); // Decrement gallonsOfFuel by one

    // Accessor function
    int getGallonsOfFuel() const { // Get gallonsOfFuel
      return this->gallonsOfFuel;
    }
};
#endif