#include <iostream>

using namespace std;

int main() {

	cout << "Arrays\n" << endl;

	const int MAX = 5;
	int intArray[MAX] = { 1,2,3,4,5 };

	int sum = 0;

	for (int i = 0; i < MAX; i++) {
		sum += intArray[i];
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}