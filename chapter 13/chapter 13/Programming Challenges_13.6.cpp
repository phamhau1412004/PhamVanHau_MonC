#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        setTotalCost();
    }

    // Constructor #2
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        if (itemNum >= 0 && itemCost >= 0.0 && itemQuantity >= 0) {
            itemNumber = itemNum;
            cost = itemCost;
            quantity = itemQuantity;
            setTotalCost();
        }
        else {
            cout << "Invalid values. Initializing to default values.\n";
            itemNumber = 0;
            quantity = 0;
            cost = 0.0;
            setTotalCost();
        }
    }

    // Setter functions
    void setItemNumber(int itemNum) {
        if (itemNum >= 0) {
            itemNumber = itemNum;
        }
    }

    void setQuantity(int itemQuantity) {
        if (itemQuantity >= 0) {
            quantity = itemQuantity;
            setTotalCost();
        }
    }

    void setCost(double itemCost) {
        if (itemCost >= 0.0) {
            cost = itemCost;
            setTotalCost();
        }
    }

    void setTotalCost() {
        totalCost = cost * quantity;
    }

    // Getter functions
    int getItemNumber() {
        return itemNumber;
    }

    int getQuantity() {
        return quantity;
    }

    double getCost() {
        return cost;
    }

    double getTotalCost() {
        return totalCost;
    }
};

int main() {
    // Create an Inventory object with constructor #2
    Inventory item1(1001, 25.5, 10);

    // Display item information
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item1.getTotalCost() << endl;

    // Set new values using setter functions
    item1.setItemNumber(1002);
    item1.setCost(19.75);
    item1.setQuantity(15);

    // Display updated item information
    cout << "\nUpdated Item Information:\n";
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item1.getTotalCost() << endl;

    return 0;
}
