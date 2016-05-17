#include <iostream>
#include <string.h>
using namespace std;
void inverted(int len,char a[]){
	char temp;
	for (int i=0;i<len/2;i++){
		temp=a[i];
		a[i]=a[(len-1)-i];
		a[len-1-i]=temp;
	
	}
}
void print(char a[]){
	int i;
	for(i=0;i<(strlen(a)-1);i++){
		cout<<a[i]<<" , ";
	}
	cout<<a[i];
}
int main() {
	char a[]={"abcdefghijklmnopqrstuvwxyz"};
	inverted(strlen(a),a);
	print(a);
	return 0;
}

