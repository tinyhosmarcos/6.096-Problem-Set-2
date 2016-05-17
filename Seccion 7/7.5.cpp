#include <iostream>
using namespace std;

void lab2_sec7_5() {
	char *oddOrEven = (char *) "Never odd or even";
	char *nthCharPtr = &oddOrEven[5];
	nthCharPtr = nthCharPtr - 2;
	cout << "nthCharPtr: " << *nthCharPtr << '\n';
	char **pointerPtr = &nthCharPtr;
	cout << "pointerPtr: " << *pointerPtr << '\n';
	cout << "*pointerPtr: " << **pointerPtr << '\n';
	nthCharPtr = nthCharPtr + 1;
	cout << nthCharPtr - oddOrEven << '\n';
	
	return;
}
int main(int argc, char *argv[]) {
	lab2_sec7_5();
	return 0;
}

