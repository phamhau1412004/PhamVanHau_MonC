#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;  // Description size

// Declaration of InventoryItem structure
struct InventoryItem
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record;  // To hold an inventory record

    // Open the file for binary input.
    fstream inventory("Inventory.dat", ios::in | ios::binary);

    // Read and display the records
    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));
    while (!inventory.eof())
    {
        cout << "Description: " << record.desc << endl;
        cout << "Quantity: " << record.qty << endl;
        cout << "Price: " << record.price << endl << endl;

        inventory.read(reinterpret_cast<char*>(&record), sizeof(record));
    }

    // Close the file.
    inventory.close();
    return 0;
}
