#include <iostream>
using namespace std;

int sum(const int x, const int y){
	return x+y;
}
int main() {
	cout<< sum(1,2+3);
	return 0;
}
/*
#include <iostream>
using namespace std;

int sum(const int x, const int y,const int z){
	return x+y+z;
}
int main() {
	cout<< sum(1,2,3);
	return 0;
}
*/
