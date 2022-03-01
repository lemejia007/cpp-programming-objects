
/*******************************************************************************
 * CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Cyborg Data Type Sizes
 * DUE DATE:   03/13/2022
 *
 */

/*******************************************************************************
 *                 Library References 
*/
#include <iostream>

using namespace std;    

/*
* Function name: userChoice()
* Description:   Function userChoice prompts the user to enter a number for a 
*                corresponding data type and returns that number.
*
* Parameters:    None
*/
int userChoice() {

  int choice; // Temporarily holds user choice
  cout << "\nData Type Memory Usage"                                
       << "\n 0 - Quit\n"                                             
       << " 1 - char\n"                                                
       << " 2 - unsigned short int\n"                                  
       << " 3 - int\n"                                                 
       << " 4 - long\n"                                                
       << " 5 - float\n"                                              
       << " 6 - double\n"                                              
       << "\nPick a data type and see the amount of memory it uses" 
       << "Enter the number corresponding to your choice: "         << endl;      
       cin >> choice;

       // Validate user input
       while(choice < 0 || choice > 6) {
         cout << "That is not a valid option, try again." << endl;
         cin >> choice;
       }

  return choice;
}

/*******************************************************************************
 * Main Program
 * Description: This program utilizes the sizeof operator to determine the amount 
 *              of memory used by different data types and then displays that 
 *              information onto the screen. 
*/
int main() {

  // Prompt the user for a choice
  int choice = userChoice();

  while (choice != 0) {

    switch (choice) {
      
      case 1:
        cout << "\nchar uses " << sizeof(char) 
             << " bytes of memory space." << endl;
        break;
      case 2:
        cout << "\nunsigned short int uses " << sizeof(unsigned short) 
             << " bytes of memory space." << endl;
        break;
      case 3:
        cout << "\nint uses " << sizeof(int) 
             << " bytes of memory space." << endl;
        break;
      case 4:
        cout << "\nlong uses " << sizeof(long) 
             << " bytes of memory space." << endl;
        break;
      case 5:
        cout << "\nfloat uses " << sizeof(float) 
             << " bytes of memory space." << endl;
        break;
      case 6:
        cout << "\ndouble uses " << sizeof(double) 
             << " bytes of memory space." << endl;
        break;
      default:
        cout << "\nYou entered an invalid option." << endl;
        break;
    }

      cout << "\nEnter another option." << endl;
      cin >> choice;

      // Validate user input
      while (choice < 0 || choice > 6) {
        cout << "\n *** That is not a valid option, try again ***" << endl;
        cin >> choice;
      }
  }

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
