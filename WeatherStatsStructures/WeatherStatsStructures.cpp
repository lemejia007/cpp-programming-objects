
/*******************************************************************************
 *                      CLASS ID: CSC/CIS-17A-43562/43480
 *
 * STUDENT:    Luis Mejia 
 * ASSIGNMENT: Weather Stats Structures
 * DUE DATE:   04/10/2022 
 *
 */

/*******************************************************************************
 *                              Library References 
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std; 

/*******************************************************************************
 *                             Structure Declarations
 */
struct WeatherStats {

  double totaRainfall,
         totalSnowfall,
         highTemperature,
         lowTemperature,
         averageTemperature;

};

/*******************************************************************************
 *                               Function Declarations
 */
/*
* Function name: calcAverageTemp
* Description:   Function calcAverageTemp simply calculates and returns a 
*                double value that represents the average temperature for 
*                the month given the month's high and low temperatures. 
*
* Parameters:    double high temp
*                double low temp
*/
double calcAverageTemp(double high, double low) { 
  return ((high + low) / 2);
}

/*
 * Function Name: findHighestTemp() 
 * Description:   Takes an array of WeatherStats structures and finds and returns 
 *                the highest temperature.  
 * 
 * Parameters:    WeatherStats array
 *                Array size
 */
double findHighestTemp(WeatherStats monthlyWeather[], int size) {
  double highest; // Highest temp
  int index; 
  highest = monthlyWeather[0].highTemperature;
    for (index = 1; index < size; index++) {
      if (monthlyWeather[index].highTemperature > highest) {
        highest = monthlyWeather[index].highTemperature;
      }
    }
  return highest; 
}

/*
 * Function Name: findLowestTemp() 
 * Description:   Takes an array of WeatherStats structures and finds and returns 
 *                the lowest temperature.  
 *
 * Parameters:    WeatehrStats array 
 *                Array size
 */
double findLowestTemp(WeatherStats monthlyWeather[], int size) {
  double lowest; // Lowest temp
  int index; 
  lowest = monthlyWeather[0].lowTemperature;
    for (index = 1; index < size; index++) {
      if (monthlyWeather[index].lowTemperature < lowest) {
        lowest = monthlyWeather[index].lowTemperature;
      }
    }
  return lowest; 
} 

/*
 * Function Name: highestTempPosition() 
 * Description:   Takes an array of WeatherStats structures and finds and returns 
 *                the highest temperature position.  
 * 
 * Parameters:    WeatherStats array
 *                Array size
 */
int highestTempPosition(WeatherStats monthlyWeather[], int size) {
  double highest; // Highest temp
  int position = 0; 
  highest = monthlyWeather[0].highTemperature;
    for (int index = 1; index < size; index++) {
      if (monthlyWeather[index].highTemperature > highest) {
        highest = monthlyWeather[index].highTemperature;
        position = index;
      }
    }
  return position; 
}

/*
 * Function Name: lowestTempPosition() 
 * Description:   Takes an array of WeatherStats structures and finds and returns 
 *                the lowest temperature position.  
 *
 * Parameters:    WeatehrStats array 
 *                Array size
 */
int lowestTempPosition(WeatherStats monthlyWeather[], int size) {
  double lowest; // Lowest temp
  int position = 0; 
  lowest = monthlyWeather[0].lowTemperature;
    for (int index = 1; index < size; index++) {
      if (monthlyWeather[index].lowTemperature < lowest) {
        lowest = monthlyWeather[index].lowTemperature;
        position = index;
      }
    }
  return position; 
}


/*******************************************************************************
 *                                 Main Program
 * Description: This program uses an array of 12 WeatherStats structures to 
 *              hold weather data for an  entire year. When the program runs, it 
 *              asks the user to enter data for each month. Then, it calculates 
 *              and displays the average monthly rainfall, total rainfall for 
 *              the year, average monthly snowfall, total snowfall for the year, 
 *              the highest and lowest temperatures for the year (and months 
 *              they occured in), and the average of all the monthly average 
 *              temperatures. 
 * 
 * Limitations: Only accepts temperatures within the range between –150 and +150
 *              degrees Fahrenheit.
 *              Only accepts rainfall and snowfall amounts greater than or equal 
 *              to zero.
*/
int main() {

  // Create an array of 12 WeatherStats structures to hold monthly weather data
  const int SIZE = 12; 
  WeatherStats monthlyWeather[SIZE]; 

  // Create an array to represent the months in a year 
  string months[SIZE] = {"January", "February", "March", "April", "May", "June", 
                         "July", "August", "September", "October", "November", 
                         "December"};

  // Read weather data for each month of the year 
  for (int index = 0; index < SIZE; index++) {

    // Read in rainfall
    cout << "\nIn inches, enter the total rainfall for " << months[index] << ": "; 
    cin >> monthlyWeather[index].totaRainfall; 

    // Validate rainfall 
    while (monthlyWeather[index].totaRainfall < 0 || cin.fail()) {
      cout << "\nTotal rainfall must be greater than or equal to zero.\n" 
           << "In inches, enter the total rainfall for " << months[index] << ": "; 
      cin.clear(); 
      cin.ignore(256,'\n'); 
      cin >> monthlyWeather[index].totaRainfall; 
    } 

    // Read in snowfall 
    cout << "In inches, enter the total snowfall for "   << months[index] << ": "; 
    cin >> monthlyWeather[index].totalSnowfall; 

    // Validate snowfall 
    while (monthlyWeather[index].totalSnowfall < 0 || cin.fail()) {
      cout << "\nTotal snowfall must be greater than or equal to zero.\n" 
           << "In inches, enter the total snowfall for " << months[index] << ": "; 
      cin.clear(); 
      cin.ignore(256,'\n'); 
      cin >> monthlyWeather[index].totalSnowfall; 
    }

    // Read in high temperature
    cout << "In degrees Farenheit, enter the high temperature for " << months[index] 
         << ": "; 
    cin >> monthlyWeather[index].highTemperature; 

    // Validate high temperature 
    while (monthlyWeather[index].highTemperature < -150 || 
           monthlyWeather[index].highTemperature > 150 || cin.fail()) {
      cout << "\nHigh temperature must be between -150 and 150 degrees Farenheit.\n" 
           << "Enter the high temperature for " << months[index] << ": "; 
      cin.clear(); 
      cin.ignore(256,'\n'); 
      cin >> monthlyWeather[index].highTemperature; 
    }

    // Read in low temperature 
    cout << "In degrees Farenheit, enter the low temperature for " << months[index] 
         << ": "; 
    cin >> monthlyWeather[index].lowTemperature; 

    // Validate low temperature 
    while (monthlyWeather[index].lowTemperature < -150 || 
          monthlyWeather[index].lowTemperature > 150 || cin.fail()){
      cout << "\nLow temperature must be between -150 and 150 degrees Farenheit.\n" 
           << "Enter the low temperature for " << months[index] << ": "; 
      cin.clear(); 
      cin.ignore(256,'\n'); 
      cin >> monthlyWeather[index].lowTemperature; 
    } 

    // Calculate average temperature for this month
    monthlyWeather[index].averageTemperature = calcAverageTemp(
                                            monthlyWeather[index].highTemperature, 
                                            monthlyWeather[index].lowTemperature);
  }

  // Calculate the total rainfall for the year and average monthly rainfall 
  double totalYearlyRainfall = 0; 
  for (int index = 0; index < SIZE; index++) {
    totalYearlyRainfall += monthlyWeather[index].totaRainfall;
  }
  double averageMonthlyRainfall = totalYearlyRainfall / SIZE; 

  // Calculate the total snowfall for the year and average monthly snowfall
  double totalYearlySnowfall = 0; 
  for (int index = 0; index < SIZE; index++) {
    totalYearlySnowfall += monthlyWeather[index].totalSnowfall; 
  }
  double averageMonthlySnowfall = totalYearlySnowfall / SIZE; 

  // Find the highest temperature 
  double highestTemperature = findHighestTemp(monthlyWeather, SIZE); 

  // Find the position of the highest temperature 
  int highestTemperaturePosition = highestTempPosition(monthlyWeather, SIZE); 

  // Find the lowest temperature
  double lowestTemperature = findLowestTemp(monthlyWeather, SIZE); 

  // Find the position of the lowest temperature 
  int lowestTemperaturePosition = lowestTempPosition(monthlyWeather, SIZE); 

  // Find the average of all the monthly average temperatures 
  double totalAverageTemperature; 
  for (int index = 0; index < SIZE; index++) {
    totalAverageTemperature += monthlyWeather[index].averageTemperature;
  } 
  double yearlyAverageTemperature = totalAverageTemperature / SIZE; 

  // Output setup
  cout << fixed << setprecision(2) << fixed;
  cout << "\n\n*********************************************************************" 
       << endl;

  // Display the average monthly rainfall 
  cout << "\nThe average monthly rainfall was " << averageMonthlyRainfall 
       << " inches" << endl; 

  // Display the total rainfall for the year 
  cout << "The total rainfall for the year was " << totalYearlyRainfall 
       << " inches" << endl;

  // Display the average monthly snowfall 
  cout << "The average monthly snowfall was " << averageMonthlySnowfall 
       << " inches" << endl; 

  // Display the total snowfall for the year 
  cout << "The total snowfall for the year was " << totalYearlySnowfall 
       << " inches" << endl;

  // Display the highest temperature and its position 
  cout << "The highest temperature was " << highestTemperature << " in " 
       << months[highestTemperaturePosition] << endl; 

  // Display the lowest temperature and its position 
  cout << "The lowest temperature was " << lowestTemperature << " in " 
       << months[lowestTemperaturePosition] << endl;

  // Display the average of all the monthly average temperatures
  cout << "The average of all the monthly average temperatures is "
       << yearlyAverageTemperature << " Fahrenheit" << endl; 

  // End of program
  cout << "\nEnd of program.\n" << endl;
  return 0;
}
