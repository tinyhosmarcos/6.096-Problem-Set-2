#include <iostream>
#include <string.h>
using namespace std;

void print(char a[]){
	int i;
	for(i=0;i<(strlen(a)-1);i++){
		cout<<a[i]<<" , ";
	}
	cout<<a[i];
}


int main() {
	char a[]={"abcdefghijklmnopqrstuvwxyz"};
	
	print(a);
	
	return 0;
}

