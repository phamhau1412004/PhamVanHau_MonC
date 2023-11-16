#include <iostream>
using namespace std;

int main() {
    double totalCalories, fatGrams;

    cout << "Enter the number of calories in the food: ";
    cin >> totalCalories;

    if (totalCalories < 0) {
        cout << "Calories cannot be less than 0. Please enter valid data." << endl;
        return 1;
    }

    cout << "Enter the number of fat grams in the food: ";
    cin >> fatGrams;

    if (fatGrams < 0 || fatGrams > totalCalories / 9) {
        cout << "Invalid input for fat grams. Please enter a valid value." << endl;
        return 1;
    }

    double caloriesFromFat = fatGrams * 9;
    double fatPercentage = (caloriesFromFat / totalCalories) * 100;

    cout << "Percentage of calories from fat: " << fatPercentage << "%" << endl;

    if (fatPercentage < 30)
        cout << "This food is low in fat." << endl;
    else
        cout << "This food is not low in fat." << endl;

    return 0;
}