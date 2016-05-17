#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<*a<<" , "<<*b;
}
int main(int argc, char *argv[]) {
	int a=2;
	int b=3;
	int *ptr_a=&a;
	int *ptr_b=&b;
	swap(ptr_a,ptr_b);
	return 0;
}

