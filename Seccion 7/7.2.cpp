#include <iostream>
using namespace std;
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	
	return;
}
int main(int argc, char *argv[]) {
	int a = 1, b = 2;
	int &ptra=a; 
	int &ptrb=b;
	swap(ptra, ptrb);
	cout << a<<" , "<< b << '\n';
	return 0;
}

