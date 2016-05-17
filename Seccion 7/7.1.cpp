#include <iostream>
using namespace std;
int length(const char *word){
	int counter=0;
	while(*(word++)!='\0'){
		counter++;
	}
	return counter;
}
int main(int argc, char *argv[]) {
	char *word=(char *) "7.1 This is a test";
	cout<<length(word);
	return 0;
}

