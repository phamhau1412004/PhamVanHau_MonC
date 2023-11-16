#include <iostream>
#include <string>
using namespace std;

class PersonalData {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    // Constructor to initialize the personal data
    PersonalData(string n, string addr, int a, string phone) {
        name = n;
        address = addr;
        age = a;
        phoneNumber = phone;
    }

    // Accessor functions
    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }

    int getAge() {
        return age;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }

    // Mutator functions
    void setName(string n) {
        name = n;
    }

    void setAddress(string addr) {
        address = addr;
    }

    void setAge(int a) {
        age = a;
    }

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
};

int main() {
    // Create instances of PersonalData
    PersonalData myInfo("Your Name", "Your Address", 25, "123-456-7890");
    PersonalData friend1Info("Friend 1", "Friend 1's Address", 30, "987-654-3210");
    PersonalData friend2Info("Friend 2", "Friend 2's Address", 28, "555-123-4567");

    // Display personal information
    cout << "Your Information:\n";
    cout << "Name: " << myInfo.getName() << endl;
    cout << "Address: " << myInfo.getAddress() << endl;
    cout << "Age: " << myInfo.getAge() << endl;
    cout << "Phone Number: " << myInfo.getPhoneNumber() << endl;

    cout << "\nFriend 1's Information:\n";
    cout << "Name: " << friend1Info.getName() << endl;
    cout << "Address: " << friend1Info.getAddress() << endl;
    cout << "Age: " << friend1Info.getAge() << endl;
    cout << "Phone Number: " << friend1Info.getPhoneNumber() << endl;

    cout << "\nFriend 2's Information:\n";
    cout << "Name: " << friend2Info.getName() << endl;
    cout << "Address: " << friend2Info.getAddress() << endl;
    cout << "Age: " << friend2Info.getAge() << endl;
    cout << "Phone Number: " << friend2Info.getPhoneNumber() << endl;

    return 0;
}
