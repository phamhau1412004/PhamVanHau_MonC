#include <iostream>
#include <fstream>
using namespace std;

// Structure to store inventory data
struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

int main() {
    ifstream inventoryFile("inventory.dat", ios::binary);

    if (!inventoryFile) {
        cerr << "Error: Unable to open the file for reading." << endl;
        return 1;
    }

    InventoryItem item;
    double totalWholesaleValue = 0;
    double totalRetailValue = 0;
    int totalQuantity = 0;

    while (inventoryFile.read(reinterpret_cast<char*>(&item), sizeof(item))) {
        totalWholesaleValue += item.wholesaleCost * item.quantity;
        totalRetailValue += item.retailCost * item.quantity;
        totalQuantity += item.quantity;
    }

    cout << "Total Wholesale Value: $" << totalWholesaleValue << endl;
    cout << "Total Retail Value: $" << totalRetailValue << endl;
    cout << "Total Quantity: " << totalQuantity << " items" << endl;

    inventoryFile.close();

    return 0;
}
