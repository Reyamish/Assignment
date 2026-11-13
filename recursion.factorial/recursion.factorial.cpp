#include <iostream>
using namespace std;

long long factorialRec(int n) { // int isnt big enough to hold so use long long
	if (n == 0) return 1;
	return n * factorialRec(n - 1);

}

/* int factorialIter(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++)
		result = result + i;
	return result;
}
*/
int main() {
	for (int n = 0; n <= 5; n++) {  // stops at 20 due to stack overflow
		cout << n << "! = " << factorialRec(n);
		cout << endl;
	}
	return 0;
}