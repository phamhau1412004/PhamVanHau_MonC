#include <iostream>
#include <iomanip>
using namespace std;

class InventoryItem {
private:
    int itemNumber;
    string description;
    int onHand;
    double price;

public:
    InventoryItem(int num, string desc, int qty, double cost) {
        itemNumber = num;
        description = desc;
        onHand = qty;
        price = cost;
    }

    void setItemNumber(int num) {
        itemNumber = num;
    }

    void setDescription(string desc) {
        description = desc;
    }

    void setOnHand(int qty) {
        onHand = qty;
    }

    void setPrice(double cost) {
        price = cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    string getDescription() const {
        return description;
    }

    int getOnHand() const {
        return onHand;
    }

    double getPrice() const {
        return price;
    }
};

class CashRegister {
private:
    double subtotal;
    double salesTaxRate;

public:
    CashRegister() {
        subtotal = 0.0;
        salesTaxRate = 0.06;
    }

    double calculatePurchaseTotal(InventoryItem item, int quantity) {
        double cost = item.getPrice();
        double unitPrice = cost + (0.30 * cost);
        subtotal = unitPrice * quantity;
        return subtotal + (subtotal * salesTaxRate);
    }

    void displayPurchaseDetails(InventoryItem item, int quantity) {
        cout << "Purchase Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
        cout << "Sales Tax (6%): $" << fixed << setprecision(2) << (subtotal * salesTaxRate) << endl;
        cout << "Purchase Total: $" << fixed << setprecision(2) << calculatePurchaseTotal(item, quantity) << endl;
    }
};

int main() {
    int itemNumber, quantity;
    string description;
    double price;

    cout << "Enter the item number: ";
    cin >> itemNumber;
    cin.ignore(); // Consume the newline character
    cout << "Enter the item description: ";
    getline(cin, description);
    cout << "Enter the item quantity on hand: ";
    cin >> quantity;
    cout << "Enter the item price: $";
    cin >> price;

    InventoryItem item(itemNumber, description, quantity, price);
    CashRegister register;

    int purchaseQuantity;
    cout << "Enter the quantity to purchase: ";
    cin >> purchaseQuantity;

    if (purchaseQuantity < 0) {
        cout << "Invalid quantity. Please enter a non-negative value." << endl;
    } else if (purchaseQuantity <= item.getOnHand()) {
        register.displayPurchaseDetails(item, purchaseQuantity);
        item.setOnHand(item.getOnHand() - purchaseQuantity);
    } else {
        cout << "Not enough items in stock to make the purchase." << endl;
    }

    return 0;
}
