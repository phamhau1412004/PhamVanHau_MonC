#include <iostream>
#include <string>

using namespace std;

const int NUM_BINS = 10;

// Structure to store bin data
struct Bin {
    string description;
    int numParts;
};

// Function prototypes
void AddParts(Bin bins[], int binIndex, int quantity);
void RemoveParts(Bin bins[], int binIndex, int quantity);

int main() {
    Bin bins[NUM_BINS] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}
    };

    while (true) {
        // Display bin data
        cout << "Warehouse Inventory Bins:\n";
        cout << "Bin #\tDescription\tParts in Bin\n";
        for (int i = 0; i < NUM_BINS; i++) {
            cout << i + 1 << "\t" << bins[i].description << "\t" << bins[i].numParts << endl;
        }

        // Ask the user to select a bin or quit
        int choice;
        cout << "Enter the bin number (1-" << NUM_BINS << ") to select a bin, or 0 to quit: ";
        cin >> choice;

        if (choice == 0) {
            break; // Quit the program
        }

        if (choice < 1 || choice > NUM_BINS) {
            cout << "Invalid choice. Please select a valid bin or enter 0 to quit." << endl;
            continue;
        }

        int binIndex = choice - 1;

        // Ask the user to add or remove parts
        int action;
        cout << "Select an action:\n";
        cout << "1. Add parts\n";
        cout << "2. Remove parts\n";
        cout << "Enter 1 or 2: ";
        cin >> action;

        if (action != 1 && action != 2) {
            cout << "Invalid action. Please enter 1 to add parts or 2 to remove parts." << endl;
            continue;
        }

        int quantity;
        cout << "Enter the quantity of parts to ";
        if (action == 1) {
            cout << "add: ";
        } else {
            cout << "remove: ";
        }
        cin >> quantity;

        if (quantity < 0) {
            cout << "Invalid quantity. Please enter a non-negative value." << endl;
            continue;
        }

        if (action == 1) {
            AddParts(bins, binIndex, quantity);
        } else {
            RemoveParts(bins, binIndex, quantity);
        }
    }

    return 0;
}

// Function to add parts to a bin
void AddParts(Bin bins[], int binIndex, int quantity) {
    if (bins[binIndex].numParts + quantity > 30) {
        cout << "This bin cannot hold more than 30 parts. Parts were not added." << endl;
    } else {
        bins[binIndex].numParts += quantity;
        cout << "Added " << quantity << " parts to the bin." << endl;
    }
}

// Function to remove parts from a bin
void RemoveParts(Bin bins[], int binIndex, int quantity) {
    if (bins[binIndex].numParts - quantity < 0) {
        cout << "Insufficient parts in the bin. Parts were not removed." << endl;
    } else {
        bins[binIndex].numParts -= quantity;
        cout << "Removed " << quantity << " parts from the bin." << endl;
    }
}
