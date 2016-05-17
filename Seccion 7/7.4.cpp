#include <iostream>
using namespace std;

void swap(int **ptr1, int **ptr2){
	int *temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	return;
}

int main(int argc, char *argv[]) {
	int x = 5, y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	swap(&ptr1, &ptr2);
	cout<< *ptr1 << ' ' << *ptr2 <<endl;
	return 0;
}

