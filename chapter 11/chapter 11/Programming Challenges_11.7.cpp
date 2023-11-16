#include <iostream>
#include <string>
using namespace std;

const int MAX_CUSTOMERS = 10;

// Structure to store customer account data
struct CustomerAccount {
    string name;
    string address;
    string cityStateZIP;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

// Function prototypes
void displayMenu();
void addCustomer(CustomerAccount[], int&);
void modifyCustomer(CustomerAccount[], int);
void displayCustomers(const CustomerAccount[], int);

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
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-4)." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\nCustomer Account Management System" << endl;
    cout << "----------------------------------" << endl;
    cout << "1. Add a new customer" << endl;
    cout << "2. Modify customer information" << endl;
    cout << "3. Display customer information" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}

void addCustomer(CustomerAccount customers[], int &numCustomers) {
    if (numCustomers < MAX_CUSTOMERS) {
        CustomerAccount newCustomer;
        cout << "\nEnter customer information:" << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, newCustomer.name);

        cout << "Address: ";
        getline(cin, newCustomer.address);

        cout << "City, State, and ZIP: ";
        getline(cin, newCustomer.cityStateZIP);

        cout << "Telephone Number: ";
        getline(cin, newCustomer.phoneNumber);

        do {
            cout << "Account Balance: $";
            cin >> newCustomer.accountBalance;
            if (newCustomer.accountBalance < 0) {
                cout << "Account balance cannot be negative. Please enter a non-negative value." << endl;
            }
        } while (newCustomer.accountBalance < 0);

        cout << "Date of Last Payment: ";
        cin.ignore();
        getline(cin, newCustomer.lastPaymentDate);

        customers[numCustomers] = newCustomer;
        numCustomers++;

        cout << "Customer added successfully!" << endl;
    } else {
        cout << "Maximum number of customers reached. Cannot add more customers." << endl;
    }
}

void modifyCustomer(CustomerAccount customers[], int numCustomers) {
    if (numCustomers > 0) {
        int customerNumber;
        cout << "Enter the customer number you want to modify (1-" << numCustomers << "): ";
        cin >> customerNumber;

        if (customerNumber >= 1 && customerNumber <= numCustomers) {
            CustomerAccount &customer = customers[customerNumber - 1];
            cout << "\nModifying customer information for " << customer.name << ":" << endl;

            cout << "Name: ";
            cin.ignore();
            getline(cin, customer.name);

            cout << "Address: ";
            getline(cin, customer.address);

            cout << "City, State, and ZIP: ";
            getline(cin, customer.cityStateZIP);

            cout << "Telephone Number: ";
            getline(cin, customer.phoneNumber);

            do {
                cout << "Account Balance: $";
                cin >> customer.accountBalance;
                if (customer.accountBalance < 0) {
                    cout << "Account balance cannot be negative. Please enter a non-negative value." << endl;
                }
            } while (customer.accountBalance < 0);

            cout << "Date of Last Payment: ";
            cin.ignore();
            getline(cin, customer.lastPaymentDate);

            cout << "Customer information modified successfully!" << endl;
        } else {
            cout << "Invalid customer number. Please enter a valid customer number." << endl;
        }
    } else {
        cout << "No customers in the database. Please add a customer first." << endl;
    }
}

void displayCustomers(const CustomerAccount customers[], int numCustomers) {
    if (numCustomers > 0) {
        cout << "\nCustomer Account Information" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < numCustomers; i++) {
            const CustomerAccount &customer = customers[i];
            cout << "Customer " << i + 1 << ":" << endl;
            cout << "Name: " << customer.name << endl;
            cout << "Address: " << customer.address << endl;
            cout << "City, State, and ZIP: " << customer.cityStateZIP << endl;
            cout << "Telephone Number: " << customer.phoneNumber << endl;
            cout << "Account Balance: $" << customer.accountBalance << endl;
            cout << "Date of Last Payment: " << customer.lastPaymentDate << endl;
            cout << "-----------------------------" << endl;
        }
    } else {
        cout << "No customers in the database. Please add a customer first." << endl;
    }
}
