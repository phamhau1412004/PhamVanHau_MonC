// This program desmontrates an array being passed to a function
#include <iostream>
using namespace std;
void ShowValues(int[], int); //Function prototype
int main() {
	const int ARRAY_SIZE = 8;
	int number[ARRAY_SIZE] = { 5 , 10 , 15 , 20 , 25 , 30 , 35 , 40 };

	ShowValues(number, ARRAY_SIZE);
		return 0;
}
//***************************************************
// Definition of function showValue. *
// This function accepts an array of integers and *
// the array's size as its arguments. The contents *
//  // of the array are displayed. *
//***************************************************
void ShowValues(int nums[], int size) {

	for (int index = 0 ; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
 }