#include <iostream>
using namespace std;

class Population {
private:
    double population;
    double births;
    double deaths;

public:
    // Constructor with input validation
    Population(double pop, double b, double d) {
        if (pop >= 1 && b >= 0 && d >= 0) {
            population = pop;
            births = b;
            deaths = d;
        } else {
            cout << "Invalid input values. Setting to default values.\n";
            population = 1;
            births = 0;
            deaths = 0;
        }
    }

    // Calculate and return the birth rate
    double getBirthRate() {
        return (births / population);
    }

    // Calculate and return the death rate
    double getDeathRate() {
        return (deaths / population);
    }
};

int main() {
    double population, births, deaths;

    // Prompt the user to enter population, births, and deaths
    cout << "Enter the population: ";
    cin >> population;

    cout << "Enter the number of births: ";
    cin >> births;

    cout << "Enter the number of deaths: ";
    cin >> deaths;

    // Create a Population object with the provided data
    Population populationData(population, births, deaths);

    // Display the birth rate and death rate
    cout << "Birth Rate: " << populationData.getBirthRate() << endl;
    cout << "Death Rate: " << populationData.getDeathRate() << endl;

    return 0;
}
