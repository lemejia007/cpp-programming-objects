
/*******************************************************************************
 *                       CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Student Line Up
 * DUE DATE:   03/30/2022
 * 
 */

/*******************************************************************************
 *                             Library References 
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;    
/*******************************************************************************
 *                            Function Definitions
 */

/*
* Function name: sortArray()
* Description:   Function sortArray() sorts a given array in ascending order. 
*                (uses selection sorting)
*
* Parameters:    An array
*                Size of array
*/
void sortArray(string array[], int size) {

  int minIndex;
  string minValue; 

  for (int start = 0; start < (size - 1); start++) {
    minIndex = start;
    minValue = array[start];

    for (int index = start + 1; index < size; index++) {
     
     if (array[index] < minValue) { 
        minValue = array[index];
        minIndex = index;
     }
    }
    array[minIndex] = array[start];
    array[start] = minValue;
  }
}

/*******************************************************************************
 *                               Main Program
 * 
 * Description: This program prompts the user to enter the number of students in 
 *              the classroom and uses that number to loop and read that many names.
 *              After every name has been read into the array of students, the 
 *              program will report back which student would be at the front of 
 *              the line and which student will be at the end of the line based 
 *              on their first name (Alphabetical).
 *         
 * Assumptions: No two students have the same name.
 * & Limits:    Numbers less than 1 or greater than 25 for the number of
 *              students will not be accepted. 
 *             
*/
int main() {

  // Prompt the user for the number of studnets in the classroom
  cout << "\nEnter a number between 1 and 25 for the number of studnets in the " 
       << "classroom: ";
  int classSize;
  cin >> classSize;

  // Clear buffer
  cin.ignore(); 

  // Validate user input
  while (classSize < 1 || classSize > 25) {
    cout << "\nThat is not a valid option, try again." << endl;
    cin >> classSize;
    // Clear buffer
    cin.ignore();
  }

  // Create an array of students
  string studentsArray[classSize];

  // Read student names into array
   for (int index = 0; index < classSize; index++) {
    cout << "Enter the first name of student # " << (index + 1) << ": ";
    getline(cin, studentsArray[index]);
  }
 
  // Sort student array in ascending order (alphabetically)
  sortArray(studentsArray, classSize);

  // Print the first and last students in line
  cout << "\nThe first student in line is: " << *studentsArray 
       << "\nThe last student in line is: " << *(studentsArray + (classSize -1)) << endl;

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
