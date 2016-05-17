#include <iostream>
using namespace std;
void inverted(const int length, char *list)
{
	for (int i = 0; i < length / 2; i++)
	{
		char temp = *(list +i);
		*(list +i) = *(list + length - 1 - i);
		*(list + length - 1 - i) = temp;
	}
}

void print(char a[]){
	int i;
	for(i=0;i<(strlen(a)-1);i++){
		cout<<a[i]<<" , ";
	}
	cout<<a[i];
}

int main(int argc, char *argv[]) {
	char a[]={"abcdefghijklmnopqrstuvwxyz"};
	
	inverted(strlen(a),a);
	print(a);
	return 0;
}

