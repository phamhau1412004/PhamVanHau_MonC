#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct PoleVault {
    string date;
    double height;
};

bool isValidHeight(double height) {
    return height >= 2.0 && height <= 5.0;
}

int main() {
    string vaulterName;
    vector<PoleVault> vaults;

    cout << "Enter the name of the pole vaulter: ";
    getline(cin, vaulterName);

    for (int i = 0; i < 3; i++) {
        PoleVault vault;
        cout << "Enter the date of vault #" << i + 1 << ": ";
        cin >> vault.date;

        cout << "Enter the height (in meters) of vault #" << i + 1 << ": ";
        cin >> vault.height;

        if (!isValidHeight(vault.height)) {
            cout << "Invalid height. Please enter a value between 2.0 and 5.0 meters." << endl;
            return 1;
        }

        vaults.push_back(vault);
    }

    sort(vaults.begin(), vaults.end(), [](const PoleVault &a, const PoleVault &b) {
        return a.height > b.height;
    });

    cout << "\nBest vaults for " << vaulterName << ":\n";
    for (const PoleVault& vault : vaults) {
        cout << "Date: " << vault.date << ", Height: " << vault.height << " meters" << endl;
    }

    return 0;
}