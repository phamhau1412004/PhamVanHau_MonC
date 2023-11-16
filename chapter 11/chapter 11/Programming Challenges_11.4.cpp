#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Structure to store weather data for a month
struct MonthData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

int main() {
    const int numMonths = 12;
    MonthData yearData[numMonths];
    double totalRainfallYear = 0.0;
    double totalAverageTemperature = 0.0;
    double highestTemperature = -100.0;
    double lowestTemperature = 140.0;
    int highestTempMonth = 0;
    int lowestTempMonth = 0;

    cout << "Enter weather data for each month of the year:\n";

    for (int month = 0; month < numMonths; month++) {
        double totalTemp = 0.0;

        cout << "Month " << (month + 1) << ":\n";

        // Input and validate total rainfall
        do {
            cout << "Total Rainfall (in inches): ";
            cin >> yearData[month].totalRainfall;
            if (yearData[month].totalRainfall < 0) {
                cout << "Total rainfall cannot be negative. Please enter a valid value.\n";
            }
        } while (yearData[month].totalRainfall < 0);

        // Input and validate high temperature
        do {
            cout << "High Temperature (in °F): ";
            cin >> yearData[month].highTemperature;
            if (yearData[month].highTemperature < -100 || yearData[month].highTemperature > 140) {
                cout << "Temperature must be within the range -100°F to 140°F. Please enter a valid value.\n";
            }
        } while (yearData[month].highTemperature < -100 || yearData[month].highTemperature > 140);

        // Input and validate low temperature
        do {
            cout << "Low Temperature (in °F): ";
            cin >> yearData[month].lowTemperature;
            if (yearData[month].lowTemperature < -100 || yearData[month].lowTemperature > 140) {
                cout << "Temperature must be within the range -100°F to 140°F. Please enter a valid value.\n";
            }
        } while (yearData[month].lowTemperature < -100 || yearData[month].lowTemperature > 140);

        // Calculate average temperature
        yearData[month].averageTemperature = (yearData[month].highTemperature + yearData[month].lowTemperature) / 2;

        // Update total rainfall for the year
        totalRainfallYear += yearData[month].totalRainfall;

        // Update total average temperature
        totalAverageTemperature += yearData[month].averageTemperature;

        // Find the highest temperature and month
        if (yearData[month].highTemperature > highestTemperature) {
            highestTemperature = yearData[month].highTemperature;
            highestTempMonth = month;
        }

        // Find the lowest temperature and month
        if (yearData[month].lowTemperature < lowestTemperature) {
            lowestTemperature = yearData[month].lowTemperature;
            lowestTempMonth = month;
        }

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Calculate the average of all monthly average temperatures
    totalAverageTemperature /= numMonths;

    // Display results
    cout << "\nWeather Data for the Year:\n";
    cout << "---------------------------\n";
    cout << "Total Annual Rainfall: " << totalRainfallYear << " inches\n";
    cout << "Highest Temperature: " << highestTemperature << " °F (Month " << highestTempMonth + 1 << ")\n";
    cout << "Lowest Temperature: " << lowestTemperature << " °F (Month " << lowestTempMonth + 1 << ")\n";
    cout << "Average Monthly Average Temperature: " << totalAverageTemperature << " °F\n";

    return 0;
}
