#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 128; i++) {
		cout << static_cast<char>(i);

		if ((i + 1) % 16 == 0) {
			cout << endl
		}
	}
	return 0;
}