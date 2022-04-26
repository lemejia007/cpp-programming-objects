
/*******************************************************************************
 *                       CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Auto Instrument
 * DUE DATE:   05/18/2022
 *
 */

/*******************************************************************************
 *                              Library References 
*/
#include <iostream>
#include "Odometer.h"
#include "FuelGauge.h"

using namespace std;  

/*******************************************************************************
 *                                  Main Program
 * Description: This program is a simple driver program for classes FuelGauge and 
 *              Odometer. This program simulates filling a vehicle up with fuel, 
 *              and then runs a loop that increments the odometer until the vehicle 
 *              runs out of fuel. During each loop iteration, the vehicle's current 
 *              mileage and amount of fuel is printed.
*/
int main() {

  // Ask the user for gallons of fuel 
  int gallonsOfFuel;
  cout << "Enter the amount of gallons of fuel you would like to add to the vehicle: ";
  cin >> gallonsOfFuel;

  // Validate user input
  while (gallonsOfFuel < 1 || gallonsOfFuel > 22) {
    cout << "\nInput must be an integer between 1 - 22." << endl;
    cin.clear();
    // Re-prompt user
    cout << "Enter the amount of gallons of fuel you would like to add to the vehicle: ";
    cin >> gallonsOfFuel;
  }

  // Create an Odometer object
  Odometer vehicleOdometer; 

  // Add fuel to vehicle 
  while (gallonsOfFuel > 0) {
    vehicleOdometer.incrementGallonsOfFuelByOne();
    gallonsOfFuel--;
  }
  cout << vehicleOdometer.getGallonsOfFuel() << " gallons of fuel were added to the vehicle.";

  // Drive the vehicle until its fuel runs out
  while (vehicleOdometer.getGallonsOfFuel() > 0) {
    vehicleOdometer.incrementCurrentMileageByOne();
    if ((vehicleOdometer.getCurrentMileage() % 32) == 0) { // If vehicle has traveled 32 miles
      vehicleOdometer.decrementGallonsOfFuelByOne();       // decrement gallons of fuel by one
    }
    // Output vehicle's current mileage and amount of fuel
    cout << "Current mileage: " << vehicleOdometer.getCurrentMileage() << "\nGallons of fuel: " 
         << vehicleOdometer.getGallonsOfFuel() << endl; 
  }

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
