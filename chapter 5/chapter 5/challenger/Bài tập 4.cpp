#include <iostream>
using namespace std;
int main() {
	double total_calo = 0;
	double calo = 3.6;
	int n;
	cout << "Enter the time" << endl;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		total_calo = total_calo + calo;
	}
	cout << "Total calo is" << total_calo;
	return 0;
}