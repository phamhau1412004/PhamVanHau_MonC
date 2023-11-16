// This program demonstrates the range-based for loop with a vector.
2 #include <iostream>
3 #include <vector>
4 using namespace std;
5
6 int main()
7 {
	8 // Define and initialize a vector.
		9 vector<int> numbers(5);
	10
		11 // Get values for the vector elements.
		12 for (int& val : numbers)
		13 {
		14 cout << "Enter an integer value: ";
		15 cin >> val;
		16 }
	17
		18 // Display the vector elements.
		19 cout << "Here are the values you entered:\n";
	20 for (int val : numbers)
		21 cout << val << endl;
	22
		23 return 0;
	24 }