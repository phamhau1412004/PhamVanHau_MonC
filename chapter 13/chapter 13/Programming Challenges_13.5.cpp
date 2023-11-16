#include <iostream>
#include <string>
using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor to initialize the retail item
    RetailItem(string desc, int units, double itemPrice) {
        description = desc;
        unitsOnHand = units;
        price = itemPrice;
    }

    // Accessor functions
    string getDescription() {
        return description;
    }

    int getUnitsOnHand() {
        return unitsOnHand;
    }

    double getPrice() {
        return price;
    }

    // Mutator functions
    void setDescription(string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }
};

int main() {
    // Create three RetailItem objects and initialize them
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    // Display item information
    cout << "Item #1 Information:\n";
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units On Hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl;

    cout << "\nItem #2 Information:\n";
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units On Hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl;

    cout << "\nItem #3 Information:\n";
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units On Hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl;

    return 0;
}
