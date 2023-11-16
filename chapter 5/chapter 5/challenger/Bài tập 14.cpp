#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int amount_of_student;
	string name[25];
	cout << "Enter amount of student in your class ";
	cin >> amount_of_student;
	if (amount_of_student < 1 || amount_of_student > 25) {
		cout << "Enter again";
		return 1;
		for (int i = 1; i < amount_of_student; i++) {
			cout << "Enter the name of student ";
			cin >> name[i];
		}
		sort(name + amount_of_student, name);

		for (int i = 0; i < amount_of_student; i++) {
			cout << name[i] << " ";
		
		}
		return 0;
	}


