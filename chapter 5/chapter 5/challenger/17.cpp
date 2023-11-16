#include <iostream>
using namespace std;
int main() {
	double Store_1, Store_2, Store_3, Store_4, Store_5;
	cout << "Enter the store 1 " << endl << "Enter the store 2 " << endl << "Enter the store 3 " << endl << "Enter the store 4 " << endl << "Enter the store 5 " << endl;
	cin >> Store_1 >> Store_2 >> Store_3 >> Store_4 >> Store_5;
	cout << "Store 1: ";
	for (int i = 0; i < Store_1 / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 2: ";
	for (int i = 0; i < Store_2 / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 3: ";
	for (int i = 0; i < Store_3 / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 4: ";
	for (int i = 0; i < Store_4 / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 5: ";
	for (int i = 0; i < Store_5 / 100; i++) {
		cout << "*";
	}
	return 0;
  }