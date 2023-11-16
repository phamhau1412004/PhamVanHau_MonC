#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructor with all values
    Employee(string n, int id, string dept, string pos) {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    // Constructor with name and ID only
    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Mutator functions
    void setName(string n) {
        name = n;
    }

    void setIdNumber(int id) {
        idNumber = id;
    }

    void setDepartment(string dept) {
        department = dept;
    }

    void setPosition(string pos) {
        position = pos;
    }

    // Accessor functions
    string getName() {
        return name;
    }

    int getIdNumber() {
        return idNumber;
    }

    string getDepartment() {
        return department;
    }

    string getPosition() {
        return position;
    }
};

int main() {
    // Create three Employee objects and initialize them
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display the data for each employee
    cout << "Employee 1 Data:\n";
    cout << "Name: " << employee1.getName() << endl;
    cout << "ID Number: " << employee1.getIdNumber() << endl;
    cout << "Department: " << employee1.getDepartment() << endl;
    cout << "Position: " << employee1.getPosition() << endl;

    cout << "\nEmployee 2 Data:\n";
    cout << "Name: " << employee2.getName() << endl;
    cout << "ID Number: " << employee2.getIdNumber() << endl;
    cout << "Department: " << employee2.getDepartment() << endl;
    cout << "Position: " << employee2.getPosition() << endl;

    cout << "\nEmployee 3 Data:\n";
    cout << "Name: " << employee3.getName() << endl;
    cout << "ID Number: " << employee3.getIdNumber() << endl;
    cout << "Department: " << employee3.getDepartment() << endl;
    cout << "Position: " << employee3.getPosition() << endl;

    return 0;
}
