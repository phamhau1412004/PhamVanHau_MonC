#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;

public:
    // Constructor
    Car(int year, string carMake) {
        yearModel = year;
        make = carMake;
        speed = 0;
    }

    // Accessor functions
    int getYearModel() {
        return yearModel;
    }

    string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }

    // Accelerate function
    void accelerate() {
        speed += 5;
    }

    // Brake function
    void brake() {
        speed -= 5;
    }
};

int main() {
    // Create a Car object
    Car myCar(2022, "Toyota");

    // Accelerate and display speed
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed after accelerating: " << myCar.getSpeed() << " mph\n";
    }

    // Brake and display speed
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed after braking: " << myCar.getSpeed() << " mph\n";
    }

    return 0;
}
