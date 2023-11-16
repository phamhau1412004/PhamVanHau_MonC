#include <iostream>
#include <string>
using namespace std;

const int MAX_SPEAKERS = 10;

struct Speaker {
    string name;
    string phoneNumber;
    string speakingTopic;
    double feeRequired;
};

void displayMenu();
void addSpeaker(Speaker[], int&);
void modifySpeaker(Speaker[], int);
void displaySpeakers(const Speaker[], int);

int main() {
    Speaker speakers[MAX_SPEAKERS];
    int numSpeakers = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addSpeaker(speakers, numSpeakers);
                break;
            case 2:
                modifySpeaker(speakers, numSpeakers);
                break;
            case 3:
                displaySpeakers(speakers, numSpeakers);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-4)." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\nSpeaker Bureau Management System" << endl;
    cout << "----------------------------------" << endl;
    cout << "1. Add a new speaker" << endl;
    cout << "2. Modify speaker information" << endl;
    cout << "3. Display all speaker information" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}

void addSpeaker(Speaker speakers[], int &numSpeakers) {
    if (numSpeakers < MAX_SPEAKERS) {
        cout << "Enter the following information for the new speaker:" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, speakers[numSpeakers].name);
        cout << "Telephone Number: ";
        getline(cin, speakers[numSpeakers].phoneNumber);
        cout << "Speaking Topic: ";
        getline(cin, speakers[numSpeakers].speakingTopic);
        cout << "Fee Required: $";
        cin >> speakers[numSpeakers].feeRequired;

        if (speakers[numSpeakers].feeRequired < 0) {
            cout << "Invalid fee amount. Please enter a non-negative value." << endl;
            return;
        }

        numSpeakers++;
        cout << "Speaker added successfully!" << endl;
    } else {
        cout << "The maximum number of speakers has been reached." << endl;
    }
}

void modifySpeaker(Speaker speakers[], int numSpeakers) {
    if (numSpeakers > 0) {
        int speakerIndex;
        cout << "Enter the index of the speaker you want to modify (0 to " << numSpeakers - 1 << "): ";
        cin >> speakerIndex;

        if (speakerIndex >= 0 && speakerIndex < numSpeakers) {
            cout << "Enter the following information to modify the speaker:" << endl;
            cout << "Name: ";
            cin.ignore();
            getline(cin, speakers[speakerIndex].name);
            cout << "Telephone Number: ";
            getline(cin, speakers[speakerIndex].phoneNumber);
            cout << "Speaking Topic: ";
            getline(cin, speakers[speakerIndex].speakingTopic);
            cout << "Fee Required: $";
            cin >> speakers[speakerIndex].feeRequired;

            if (speakers[speakerIndex].feeRequired < 0) {
                cout << "Invalid fee amount. Please enter a non-negative value." << endl;
                return;
            }

            cout << "Speaker information modified successfully!" << endl;
        } else {
            cout << "Invalid index. Please enter a valid index within the range." << endl;
        }
    } else {
        cout << "No speakers to modify. Please add a speaker first." << endl;
    }
}

void displaySpeakers(const Speaker speakers[], int numSpeakers) {
    if (numSpeakers > 0) {
        cout << "\nSpeaker Information" << endl;
        cout << "---------------------" << endl;
        for (int i = 0; i < numSpeakers; i++) {
            cout << "Speaker " << i + 1 << ":" << endl;
            cout << "Name: " << speakers[i].name << endl;
            cout << "Telephone Number: " << speakers[i].phoneNumber << endl;
            cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
            cout << "Fee Required: $" << speakers[i].feeRequired << endl;
            cout << "---------------------" << endl;
        }
    } else {
        cout << "No speakers to display. Please add a speaker first." << endl;
    }
}
