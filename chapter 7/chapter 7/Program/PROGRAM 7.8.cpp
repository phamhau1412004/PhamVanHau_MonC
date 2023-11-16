//This progtam uses an array of ten characters to store the
//first ten letter ofthe alphabet . The ASCII codes of the 
//charaters are displayed.
#include <iostream>
using namespace std;
int main() {
	const int NUMBER_LETTERS = 10;
	char LETTERS[NUMBER_LETTERS] = { 'A' , 'B' , 'D' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' };
	cout << "Characters" << "\t\t" << "ASCII Code" << endl;
	cout << "----------" << "\t\t" << "----------" << endl;
	for (int count = 0; count < NUMBER_LETTERS; count++) {
		cout << LETTERS[count] << "\t\t" << static_cast<int>(LETTERS[count]) << endl;
	}
	return 0;
}