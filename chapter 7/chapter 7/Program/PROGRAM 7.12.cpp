//This program usses a range-based for loop to 
// modify the contents of an array
#include <iostream>
using namespace std;
int main() {
	const int SIZE = 5;
	int number[5];

	//Get values for the array
	for (int &val : number)
	{
		cout << "Enter an integer value;";
		cin >> val;
	}
	//Display the values in the array.
	cout << "Here are the values you entered " << endl;
	for (int val : number)
		cout << val << endl;

}