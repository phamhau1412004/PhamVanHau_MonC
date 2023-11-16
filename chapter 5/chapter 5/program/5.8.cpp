#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ADULT_CHOICE = 1, CHILD_CHOICE = 2, SENIOR_CHOICE = 3, QUIT_CHOICE = 4;
    const double ADULT = 40.0, CHILD = 20.0, SENIOR = 30.0;
    int choice, months;
    double charges;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << "\n\t\tHealth Club Membership Menu\n\n"
            << "1. Standard Adult Membership\n"
            << "2. Child Membership\n"
            << "3. Senior Citizen Membership\n"
            << "4. Quit the Program\n\n"
            << "Enter your choice: ";
        cin >> choice;

        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        if (choice != QUIT_CHOICE)
        {
            cout << "For how many months? ";
            cin >> months;

            switch (choice)
            {
            case ADULT_CHOICE:
                charges = months * ADULT;
                break;
            case CHILD_CHOICE:
                charges = months * CHILD;
                break;
            case SENIOR_CHOICE:
                charges = months * SENIOR;
            }

            cout << "The total charges are $" << charges << endl;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
