#include <iostream>
using namespace std;
int main() {
	int Day;
	int Total = 0;
	cout << "Enter the day you work ";
	cin >> Day;
	if (Day <= 0) {
		cout << "Enter again" << endl;
		return 1;
	}
	for (int i = 1; i <= Day; i++) {
		Total = Total * 2;
		Total++;
	}
	cout << Total;
	return 0;
}

