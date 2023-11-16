#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap kich thuoc cua mang " << endl;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << " " << i + 1 << endl;
		cin >> arr[i];
		}
	int Max_value = arr[0];
	int Min_value = arr[0];

	for (int i =  0; i < n; i++) {
		if (arr[i] > Max_value) {
			Max_value = arr[i];
		}
		if (arr[i] < Min_value) {
			Min_value = arr[i]; 
		}
	}	
	cout << "Max value is " << Max_value << endl;
	cout << "Min value is " << Min_value;
	return 0;
 }