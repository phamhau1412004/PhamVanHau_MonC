#include <iostream>
using namespace std;
int main() {
	double Speed, time;
	double Distance;
	int time_1 = 1;
	cout << "Enter the speed ";
		cin >> Speed;
	cout << "Enter the time ";
		cin >> time;
		if (time <= 0 || Speed <= 0) {
			cout << "Enter again";
			cin >> Speed >> time;
		}
		for (int i = 1; i <= time; i++) {
			Distance = i * Speed;
			cout << time_1 << " " << Distance << endl;
			time_1++;
	}
	return 0;
	}
