#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to hold budget categories
struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function to input actual expenses
void getActualExpenses(MonthlyBudget &budget) {
    cout << "Enter the actual expenses for each category:" << endl;
    cout << "Housing: ";
    cin >> budget.housing;
    cout << "Utilities: ";
    cin >> budget.utilities;
    cout << "Household Expenses: ";
    cin >> budget.householdExpenses;
    cout << "Transportation: ";
    cin >> budget.transportation;
    cout << "Food: ";
    cin >> budget.food;
    cout << "Medical: ";
    cin >> budget.medical;
    cout << "Insurance: ";
    cin >> budget.insurance;
    cout << "Entertainment: ";
    cin >> budget.entertainment;
    cout << "Clothing: ";
    cin >> budget.clothing;
    cout << "Miscellaneous: ";
    cin >> budget.miscellaneous;
}

// Function to display budget report
void displayBudgetReport(const MonthlyBudget &budget) {
    double totalBudget = budget.housing + budget.utilities + budget.householdExpenses +
                        budget.transportation + budget.food + budget.medical +
                        budget.insurance + budget.entertainment + budget.clothing +
                        budget.miscellaneous;

    double totalExpenses = budget.housing + budget.utilities + budget.householdExpenses +
                          budget.transportation + budget.food + budget.medical +
                          budget.insurance + budget.entertainment + budget.clothing +
                          budget.miscellaneous;

    cout << fixed << showpoint << setprecision(2);
    cout << "Budget Category\tBudget Amount\tActual Amount\tDifference" << endl;
    cout << "-------------------------------------------------------" << endl;

    // Display each budget category and the difference
    cout << "Housing\t\t$" << budget.housing << "\t\t$" << budget.housing << "\t\t$" << (budget.housing - budget.housing) << endl;
    cout << "Utilities\t$" << budget.utilities << "\t\t$" << budget.utilities << "\t\t$" << (budget.utilities - budget.utilities) << endl;
    cout << "Household Expenses\t$" << budget.householdExpenses << "\t\t$" << budget.householdExpenses << "\t\t$" << (budget.householdExpenses - budget.householdExpenses) << endl;
    cout << "Transportation\t$" << budget.transportation << "\t\t$" << budget.transportation << "\t\t$" << (budget.transportation - budget.transportation) << endl;
    cout << "Food\t\t$" << budget.food << "\t\t$" << budget.food << "\t\t$" << (budget.food - budget.food) << endl;
    cout << "Medical\t\t$" << budget.medical << "\t\t$" << budget.medical << "\t\t$" << (budget.medical - budget.medical) << endl;
    cout << "Insurance\t$" << budget.insurance << "\t\t$" << budget.insurance << "\t\t$" << (budget.insurance - budget.insurance) << endl;
    cout << "Entertainment\t$" << budget.entertainment << "\t\t$" << budget.entertainment << "\t\t$" << (budget.entertainment - budget.entertainment) << endl;
    cout << "Clothing\t$" << budget.clothing << "\t\t$" << budget.clothing << "\t\t$" << (budget.clothing - budget.clothing) << endl;
    cout << "Miscellaneous\t$" << budget.miscellaneous << "\t\t$" << budget.miscellaneous << "\t\t$" << (budget.miscellaneous - budget.miscellaneous) << endl;

    // Display the total budget and total expenses
    cout << "-------------------------------------------------------" << endl;
    cout << "Total Budget\t$" << totalBudget << "\t\tTotal Expenses\t$" << totalExpenses << "\t\tDifference\t$" << (totalBudget - totalExpenses) << endl;
}

int main() {
    MonthlyBudget budget;
    
    getActualExpenses(budget);
    displayBudgetReport(budget);

    return 0;
}
