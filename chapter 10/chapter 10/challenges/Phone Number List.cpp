#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phoneNumber;
};

int main() {
    Contact contacts[] = {
        {"Alejandra Cruz", "555-1223"},
        {"Joe Looney", "555-0097"},
        {"Geri Palmer", "555-8787"},
        {"Lý Thần", "555-1212"},
        {"Holly Gaddis", "555-8878"},
        {"Sam Wiggins", "555-0998"},
        {"Bob Kain", "555-8712"},
        {"Tim Haynes", "555-7676"},
        {"Warren Gaddis", "555-9037"},
        {"Jean James", "555-4939"},
        {"Ron Palmer", "555-2783"}
    };

    cout << "Nhập tên hoặc phần tên cần tìm: ";
    string searchName;
    getline(cin, searchName);

    bool found = false;
    for (const Contact& contact : contacts) {
        if (contact.name.find(searchName) != string::npos) {
            cout << contact.name << ", " << contact.phoneNumber << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Không tìm thấy kết quả phù hợp." << endl;
    }

    return 0;
}
