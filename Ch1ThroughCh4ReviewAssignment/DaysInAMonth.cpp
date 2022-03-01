
/*******************************************************************************
 * CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Days in a Month
 * DUE DATE:   03/13/2022
 *
 */

/*******************************************************************************
 *                 Library References 
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;    

/*
* Function name: daysInMonth()
* Description:   Function daysInMonth() take an integer value for month and an 
*                integer value for year which uses to calculate the number of 
*                days in that month and then display that number to the screen.
*
* Parameters:    int month, int year
*/
void daysInMonth(int month, int year) {
  	
    // Create an array representing the days in each month of the year 
   	int daysPerMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  	
  	// If year is divisible by (100 AND 400) OR year is divisible by 4 then year 
  	// is a leap year
  	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0)) { 
  		daysPerMonth[1] = 29; // Assign February 29 days 
  	}  
  	
  	// Declare and initialize numOfDays
  	int numOfDays = 0;
  	
  	// Find the number of days for the month the user specified
  	switch (month) {
    	case 1:  numOfDays = daysPerMonth[0];
               break;
    	case 2:  numOfDays = daysPerMonth[1];
               break;
    	case 3:  numOfDays = daysPerMonth[2];
               break;
    	case 4:  numOfDays = daysPerMonth[3];
               break;
    	case 5:  numOfDays = daysPerMonth[4];
               break;
    	case 6:  numOfDays = daysPerMonth[5];
               break;
    	case 7:  numOfDays = daysPerMonth[6];
               break;
    	case 8:  numOfDays = daysPerMonth[7];
               break;
    	case 9:  numOfDays = daysPerMonth[8];
               break;
    	case 10: numOfDays = daysPerMonth[9];
               break;
    	case 11: numOfDays = daysPerMonth[10];
               break;
    	case 12: numOfDays = daysPerMonth[11];
               break;
    }

    // Display results
    cout << month << "/" << year << " has " << numOfDays << " days." << endl;
	}

/*******************************************************************************
 * Main Program
 * Description: This program asks the user to enter the month (letting the user 
 *              enter an integer in the range of 1 through 12) and the year. It 
 *              will then display the number of days in that month. 
*/
int main() {

  // Prompt user for the month
	cout << "\nEnter an integer number from 1 to 12 for the month \n"  
		   << "(1=January, 2=February, ..., 12=December): " << endl;
  int month;
  cin >> month;

  // Validate user input for month
  while (month < 1 || month > 12) {
    cout << "\nTry again. Enter an integer number from 1 to 12 for the month \n"  
		     << "(1=January, 2=February, ..., 12=December): " << endl;
    cin >> month;
  }

  // Prompt user for the year
	cout << "\nEnter an integer number from 1 to 1,000,000,000 for the year: \n" << endl;
  int year;
  cin >> year;

  // Validate user input for year
  while (year < 1 || year > 1000000000) {
    cout << "\nTry again. Enter an integer between 1 and 1,000,000,000:" << endl;
    cin >> year;
  }

  // Calculate days in month and display result
  daysInMonth(month, year);

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
