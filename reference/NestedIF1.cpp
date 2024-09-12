// C++ Program to demonstrate
// Nested-if condition
#include <iostream>
using namespace std;

int main()
{

	int a = 220, b = 10, c = 1;
	// this condition is itself false we don't
	// get inside the nesting if block
	if (a == 20) {
		if (b == 10) {
			if (c == 2) {
				cout << "Parameter Pass!!" << endl;
			}
		}
	}
	cout << " No nested if condition is executed \n ";
	return 0;
}
