//This program demastrates the range-based for loop
#include <iostream>
using namespace std;
int main() 
{
	//Define an array of intergers.
	int numbers[5] = { 10 , 20 , 30 , 40 , 50 };

	//Display the values in the array.
	for (int val : numbers)
		cout << val << endl;
	return 0;
}