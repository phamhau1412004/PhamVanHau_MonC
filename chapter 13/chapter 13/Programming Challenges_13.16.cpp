#include <iostream>
#include <vector>
using namespace std;

class Temperature {
private:
    double temperature;

public:
    Temperature() {
        temperature = 0.0;
    }

    Temperature(double temp) {
        temperature = temp;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    double getTemperature() {
        return temperature;
    }

    bool isEthylFreezing() {
        return temperature <= -173;
    }

    bool isEthylBoiling() {
        return temperature >= 172;
    }

    bool isOxygenFreezing() {
        return temperature <= -362;
    }

    bool isOxygenBoiling() {
        return temperature >= -306;
    }

    bool isWaterFreezing() {
        return temperature <= 32;
    }

    bool isWaterBoiling() {
        return temperature >= 212;
    }
};

int main() {
    double userTemperature;
    vector<string> substances;

    cout << "Enter a temperature in Fahrenheit: ";
    cin >> userTemperature;

    Temperature temp(userTemperature);

    if (temp.isEthylFreezing()) {
        substances.push_back("Ethyl Alcohol (Freezing)");
    }
    if (temp.isEthylBoiling()) {
        substances.push_back("Ethyl Alcohol (Boiling)");
    }
    if (temp.isOxygenFreezing()) {
        substances.push_back("Oxygen (Freezing)");
    }
    if (temp.isOxygenBoiling()) {
        substances.push_back("Oxygen (Boiling)");
    }
    if (temp.isWaterFreezing()) {
        substances.push_back("Water (Freezing)");
    }
    if (temp.isWaterBoiling()) {
        substances.push_back("Water (Boiling)");
    }

    if (substances.empty()) {
        cout << "No substances will freeze or boil at this temperature." << endl;
    } else {
        cout << "At " << userTemperature << " degrees Fahrenheit, the following substances will:" << endl;
        for (const string& substance : substances) {
            cout << substance << endl;
        }
    }

    return 0;
}
