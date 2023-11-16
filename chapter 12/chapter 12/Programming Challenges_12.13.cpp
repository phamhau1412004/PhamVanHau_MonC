#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to store inventory data
struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Function to add a new record to the file
void addRecord(fstream& file) {
    InventoryItem item;

    cout << "Enter Item Description: ";
    cin.ignore();
    getline(cin, item.description);

    cout << "Enter Quantity on Hand: ";
    cin >> item.quantity;

    while (item.quantity < 0) {
        cout << "Quantity cannot be negative. Enter Quantity on Hand: ";
        cin >> item.quantity;
    }

    cout << "Enter Wholesale Cost: $";
    cin >> item.wholesaleCost;

    while (item.wholesaleCost < 0) {
        cout << "Wholesale Cost cannot be negative. Enter Wholesale Cost: $";
        cin >> item.wholesaleCost;
    }

    cout << "Enter Retail Cost: $";
    cin >> item.retailCost;

    while (item.retailCost < 0) {
        cout << "Retail Cost cannot be negative. Enter Retail Cost: $";
        cin >> item.retailCost;
    }

    cout << "Enter Date Added to Inventory (MM/DD/YYYY): ";
    cin.ignore();
    getline(cin, item.dateAdded);

    file.write(reinterpret_cast<char*>(&item), sizeof(item);
}

// Function to display a specific record from the file
void displayRecord(fstream& file) {
    int recordNumber;

    cout << "Enter the record number to display: ";
    cin >> recordNumber;

    file.seekg(static_cast<long>(recordNumber - 1) * sizeof(InventoryItem));

    InventoryItem item;
    file.read(reinterpret_cast<char*>(&item), sizeof(item));

    cout << "Record " << recordNumber << ":\n";
    cout << "Description: " << item.description << endl;
    cout << "Quantity on Hand: " << item.quantity << endl;
    cout << "Wholesale Cost: $" << item.wholesaleCost << endl;
    cout << "Retail Cost: $" << item.retailCost << endl;
    cout << "Date Added: " << item.dateAdded << endl;
}

// Function to change a specific record in the file
void changeRecord(fstream& file) {
    int recordNumber;

    cout << "Enter the record number to change: ";
    cin >> recordNumber;

    file.seekg(static_cast<long>(recordNumber - 1) * sizeof(InventoryItem));

    InventoryItem item;
    file.read(reinterpret_cast<char*>(&item), sizeof(item));

    cout << "Record " << recordNumber << ":\n";
    cout << "Description: " << item.description << endl;
    cout << "Quantity on Hand: " << item.quantity << endl;
    cout << "Wholesale Cost: $" << item.wholesaleCost << endl;
    cout << "Retail Cost: $" << item.retailCost << endl;
    cout << "Date Added: " << item.dateAdded << endl;

    cout << "Enter new Item Description: ";
    cin.ignore();
    getline(cin, item.description);

    cout << "Enter new Quantity on Hand: ";
    cin >> item.quantity;

    while (item.quantity < 0) {
        cout << "Quantity cannot be negative. Enter new Quantity on Hand: ";
        cin >> item.quantity;
    }

    cout << "Enter new Wholesale Cost: $";
    cin >> item.wholesaleCost;

    while (item.wholesaleCost < 0) {
        cout << "Wholesale Cost cannot be negative. Enter new Wholesale Cost: $";
        cin >> item.wholesaleCost;
    }

    cout << "Enter new Retail Cost: $";
    cin >> item.retailCost;

    while (item.retailCost < 0) {
        cout << "Retail Cost cannot be negative. Enter new Retail Cost: $";
        cin >> item.retailCost;
    }

    cout << "Enter new Date Added to Inventory (MM/DD/YYYY): ";
    cin.ignore();
    getline(cin, item.dateAdded);

    file.seekp(static_cast<long>(recordNumber - 1) * sizeof(InventoryItem));
    file.write(reinterpret_cast<char*>(&item), sizeof(item);
}

int main() {
    fstream inventoryFile("inventory.dat", ios::in | ios::out | ios::binary);

    if (!inventoryFile) {
        cerr << "Error: Unable to open the file for reading and writing." << endl;
        return 1;
    }

    int choice;

    do {
        cout << "Inventory Management Menu\n";
        cout << "1. Add New Record\n";
        cout << "2. Display Record\n";
        cout << "3. Change Record\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecord(inventoryFile);
                break;
            case 2:
                displayRecord(inventoryFile);
                break;
            case 3:
                changeRecord(inventoryFile);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    inventoryFile.close();

    return 0;
}
