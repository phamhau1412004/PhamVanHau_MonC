#include <iostream>
using namespace std;
int main() {
	int floors, room, room_used, percent;
	int total_room = 0;
	int total_room_used = 0;

	cout << "Enter amount of floors ";
	cin >> floors;
	if (floors < 1) {
		cout << "Enter again ";
		cin >> floors;
	}
	for (int i = 1; i <= floors; i++) {
		cout << "Enter the room on floor " << i << "; ";
		cin >> room;
		if (room < 10) {
			cout << "Enter again ";
			cin >> room;
		}
			cout << "Enter the room used on floors " << i << ": ";
			cin >> room_used;
		

			total_room_used = total_room_used + room_used;
				total_room = total_room + room;
				if (total_room_used < 1 || total_room_used > total_room) {
					cout << "Enter again";
					return 1;
		}
	}
	percent = (static_cast<double>(total_room_used) / total_room) * 100;
	cout << "Percent of room was used in hotel is " << percent << "%";
	return 0;
}