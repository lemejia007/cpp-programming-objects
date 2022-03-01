
/*******************************************************************************
 * CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Ingredient Adjuster
 * DUE DATE:   03/13/2022
 *
 */

/*******************************************************************************
 *                 Library References 
*/
#include <iostream>
#include <iomanip>

using namespace std;    

/*******************************************************************************
 * Main Program
 * Description: This program asks the user the amount of cookies they would like 
 *              to make and then displays the number of cups of each ingredient 
 *              needed for the specified number of cookies.
 * 
 *              Recipe (makes 48 cookies) : 1.50 cups of sugar
 *                                          1.00 cups of butter
 *                                          2.75 cups of flour
*/
int main() {

  // Program constants 
  const double CUPS_OF_SUGAR_PER_COOKIE  = 1.50/48,
               CUPS_OF_BUTTER_PER_COOKIE = 1.00/48,
               CUPS_OF_FLOUR_PER_COOKIE  = 2.75/48;

  // Prompt the user and store value 
  cout << "\nHow many cookies would you like to make?" << endl;
  int amountOfCookies;
  cin >> amountOfCookies; 

  // Validate user input
  while (amountOfCookies < 1) {
    cout << "\nHow many cookies would you like to make?" 
         << "Enter a number grader than 0\n" << endl; 
    cin >> amountOfCookies;
  }

  // Display the cups needed of each ingredient 
  cout << "\nTo make " << amountOfCookies << " cookies, you will need:\n\n" 
       << left << setprecision(3)
       << setw(15) << "\tCups of suagr"  << " : " 
       << (amountOfCookies * CUPS_OF_SUGAR_PER_COOKIE)  << "\n" 
       << setw(15) << "\tCups of butter" << " : " 
       << (amountOfCookies * CUPS_OF_BUTTER_PER_COOKIE) << "\n"
       << setw(15) << "\tCups of flour"  << " : " 
       << (amountOfCookies * CUPS_OF_FLOUR_PER_COOKIE)  << "\n" 
       << endl;

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
