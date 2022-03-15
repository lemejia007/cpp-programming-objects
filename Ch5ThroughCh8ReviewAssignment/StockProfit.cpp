
/*******************************************************************************
 *                       CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia
 * ASSIGNMENT: Stock Profit
 * DUE DATE:   03/30/2022
 *
 */

/*******************************************************************************
 *                            Library References 
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;    

/*
* Function name: profitOrLoss()
* Description:   Function profitOrLoss() accepts as arguments the number of shares, 
*                purchase price per share, purchase commission paid, sale price 
*                per share, and the sale commission paid and returns the profit OR 
*                loss from the sale of stock. 
*
* Parameters:   NS (number of shares), PP (purchase price per share), 
*               PC (purchase commission paid), SP (sale price per share), 
*               SC (sale commission paid)
*/
double profitOrLoss(double NS, double PP, double PC, double SP, double SC) {
  return (( NS * SP ) - SC ) - (( NS * PP ) + PC ); 
}

/*******************************************************************************
 *                            Main Program
 * Description: This program demonstrates the profitOrLoss() function and asks 
 *              the to eneter the necessary data and displays the amount for 
 *              either 
*/
int main() {

  // Obtain number of shares from user (NS)
  cout << "\nEnter the number of shares: ";
  double numShares;
  cin >> numShares; 

  // Obtain sale price per shares from user (SP)
  cout << "Enter the sales price per share: ";
  double salePricePerShare;
  cin >> salePricePerShare;

  // Obtain sale commission paid from user (SC)
  cout << "Enter the sale commission paid: ";
  double saleCommissionPaid;
  cin >> saleCommissionPaid;

  // Obtain the purchase price per share from user (PP)
  cout << "Enter the purchase price per share: ";
  double purchasePricePerShare; 
  cin >> purchasePricePerShare; 

  // Obtain purchase commission paid from user (PC)
  cout << "Enter the purchase commission paid: ";
  double purchaseCommissionPaid; 
  cin >> purchaseCommissionPaid; 

  // Process data and calculate profit or loss
  double profit = profitOrLoss(numShares, purchasePricePerShare, purchaseCommissionPaid, 
               salePricePerShare, saleCommissionPaid);

  // Display profit or loss
  if (profit < 0) {
    cout << setprecision(3) << "There was a loss of $" << profit << endl;
  } else {
    cout << setprecision(3) << "There was a profit of $" << profit << endl;
  }

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
