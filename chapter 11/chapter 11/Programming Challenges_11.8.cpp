#include <iostream>
#include <string>
#include <algorithm>  // for case-insensitive search
using namespace std;

const int MAX_CUSTOMERS = 10;

struct CustomerAccount {
    string name;
    string address;
    string cityStateZIP;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

void displayMenu();
void addCustomer(CustomerAccount[], int&);
void modifyCustomer(CustomerAccount[], int);
void displayCustomers(const CustomerAccount[], int);
void searchCustomers(const CustomerAccount[], int, const string&);

int main() {
    CustomerAccount customers[MAX_CUSTOMERS];
    int numCustomers = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addCustomer(customers, numCustomers);
                break;
            case 2:
                modifyCustomer(customers, numCustomers);
                break;
            case 3:
                displayCustomers(customers, numCustomers);
                break;
            case 4:
                string searchName;
                cout << "Enter a partial name to search for: ";
                cin.ignore();
                getline(cin, searchName);
                searchCustomers(customers, numCustomers, searchName);
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-5)." << endl;
        }
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    cout << "\nCustomer Account Management System" << endl;
    cout << "----------------------------------" << endl;
    cout << "1. Add a new customer" << endl;
    cout << "2. Modify customer information" << endl;
    cout << "3. Display all customer information" << endl;
    cout << "4. Search for a customer by name" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

void addCustomer(CustomerAccount customers[], int &numCustomers) {
    // ... (same as before)
}

void modifyCustomer(CustomerAccount customers[], int numCustomers) {
    // ... (same as before)
}

void displayCustomers(const CustomerAccount customers[], int numCustomers) {
    // ... (same as before)
}

void searchCustomers(const CustomerAccount customers[], int numCustomers, const string &partialName) {
    bool found = false;
    cout << "\nMatching Customers" << endl;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < numCustomers; i++) {
        const CustomerAccount &customer = customers[i];

        // Convert both names to lowercase for case-insensitive search
        string lowercaseName = customer.name;
        transform(lowercaseName.begin(), lowercaseName.end(), lowercaseName.begin(), ::tolower);
        string lowercasePartialName = partialName;
        transform(lowercasePartialName.begin(), lowercasePartialName.end(), lowercasePartialName.begin(), ::tolower);

        // Check if the customer's name contains the partial name
        if (lowercaseName.find(lowercasePartialName) != string::npos) {
            cout << "Customer " << i + 1 << ":" << endl;
            cout << "Name: " << customer.name << endl;
            cout << "Address: " << customer.address << endl;
            cout << "City, State, and ZIP: " << customer.cityStateZIP << endl;
            cout << "Telephone Number: " << customer.phoneNumber << endl;
            cout << "Account Balance: $" << customer.accountBalance << endl;
            cout << "Date of Last Payment: " << customer.lastPaymentDate << endl;
            cout << "-----------------------------" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No matching customers found." << endl;
    }
}
