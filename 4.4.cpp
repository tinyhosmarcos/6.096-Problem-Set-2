#include <iostream>
using namespace std;

int sum(const int a, const int b,const int c=0,const int d=0){//c,d opcionales
	return a+b+c+d;
}

int main(int argc, char *argv[]) {
	cout<<sum(2,4);
	return 0;
}

