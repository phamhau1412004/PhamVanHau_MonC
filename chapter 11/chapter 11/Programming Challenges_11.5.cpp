#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Enumerated data type for months
enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

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
    Month highestTempMonth = JANUARY; // Initialize to a valid month
    Month lowestTempMonth = JANUARY; // Initialize to a valid month

    cout << "Enter weather data for each month of the year:\n";

    for (Month month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        double totalTemp = 0.0;
        string monthName;

        switch (month) {
            case JANUARY: monthName = "January"; break;
            case FEBRUARY: monthName = "February"; break;
            case MARCH: monthName = "March"; break;
            case APRIL: monthName = "April"; break;
            case MAY: monthName = "May"; break;
            case JUNE: monthName = "June"; break;
            case JULY: monthName = "July"; break;
            case AUGUST: monthName = "August"; break;
            case SEPTEMBER: monthName = "September"; break;
            case OCTOBER: monthName = "October"; break;
            case NOVEMBER: monthName = "November"; break;
            case DECEMBER: monthName = "December"; break;
        }

        cout << "Month " << monthName << ":\n";

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
