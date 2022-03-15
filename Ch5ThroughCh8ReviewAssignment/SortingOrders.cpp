
/*******************************************************************************
 *                        CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Sorting Orders
 * DUE DATE:   03/30/2022
 *
 */

/*******************************************************************************
 *                               Library References 
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>

using namespace std;    
/*******************************************************************************
 *                            Function Prototypes
 */
void printArray       (double array[], int size);
void ascModBubbleSort (double array[], int size); // Modified ascending bubble 
void descModBubbleSort(double array[], int size); // Modified descending bubble

/*******************************************************************************
 *                                  Main Program
 * Description: This program uses two identical arrays of fifteen values of the 
 *              double data type. Then displays the contents of the first array, 
 *              then calls a function to sort the array using an ASCENDING order 
 *              bubble sort modified to print out the array contents after each 
 *              pass of the sort. The program then displays the contents of the 
 *              second array, and calls a function to sort the array using a 
 *              DESCENDING order selection sort modified to print out the array 
 *              contents after each pass of the sort.
*/
int main() {

  // Create two identical arrays of fifteen values of the double data type
  const int SIZE = 15; 
  double arrayOne[SIZE]; 
  double arrayTwo[SIZE]; 

  // Read 15 values into array one
  for (int index = 0; index < SIZE; index++) {
    cout << "Enter a double value for element # " << (index + 1) << ": ";
    cin >> arrayOne[index]; 
  }

  // Copy the contents of array one into array two
  copy(arrayOne, arrayOne + SIZE, arrayTwo);

  // Display the contents of array one
  cout << "\nContents of array one BEFORE calling modified bubble sort function:\n" 
       << "-------------------------------------------------------------------" << endl; 
  printArray(arrayOne, SIZE); 

  // Call ascending modified bubble sort for array one
  cout << "\n\nContents of array one AFTER calling modified bubble sort function:\n" 
       << "------------------------------------------------------------------" << endl; 
  ascModBubbleSort(arrayOne, SIZE); 

  // Display the contents of array two
  cout << "\nContents of array two BEFORE calling modified bubble sort function:\n" 
       << "-------------------------------------------------------------------" << endl; 
  printArray(arrayTwo, SIZE); 

  // Call descending modified bubble sort for array two 
  cout << "\n\nContents of array two AFTER calling modified bubble sort function:\n" 
       << "------------------------------------------------------------------" << endl; 
  descModBubbleSort(arrayTwo, SIZE); 

  // End of program
  cout << "\nEnd of program.\n" << endl; 
  return 0; 
}

/*******************************************************************************
 *                            Function Definitions
 */ 
/*
* Function name: printArray()
* Description:   Function print array prints the contents of an array. 
*
* Parameters:    A doubles array
*                Size of array
*/
void printArray(double array[], int size) {
  for (int index = 0; index < size; index++) {
    if (index == (size - 1)) {
      cout << array[index];
    } else {
      cout << array[index] << ", ";
    }
  }
}

/*
* Function name: ascModBubbleSort()
* Description:   Function ascModBubbleSort() is a modified bubble sort in 
*                which it sorts an array in ASCENDING order and prints out the 
*                array contents after each pass. 
*
* Parameters:   An array of doubles
*               Size of array
*/
void ascModBubbleSort (double array[], int size) {
  bool swap;
  int temp;

  do {
    swap = false;
    for (int count = 0; count < (size -1); count++) {

      if (array[count] > array[count + 1]) {
        temp = array[count];
        array[count] = array[count + 1];
        swap = true; 
      }
      printArray(array, size);
      cout << endl;
    }
  } while (swap);
}  

/*
* Function name: descModBubbleSort()
* Description:   Function descModBubbleSort() is a modified bubble sort in 
*                which it sorts an array in DECENDING order and prints out the 
*                array contents after each pass. 
*
* Parameters:   An array of doubles
*               Size of array
*/
void descModBubbleSort(double array[], int size) {
   bool swap;
  int temp;

  do {
    swap = false;
    for (int count = 0; count < (size -1); count++) {

      if (array[count] < array[count + 1]) {
        temp = array[count];
        array[count] = array[count + 1];
        swap = true; 
      } 
      printArray(array, size); 
      cout << endl; 
    }
  } while (swap);
}