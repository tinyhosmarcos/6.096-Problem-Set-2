#include <iostream>
using namespace std;
const int width=3;
const int length=4;
int *transpose ( const int input [][ length ]) {
	int output [length][width];
	for(int i=0;i<width;i++){
		for (int j=0;j<length;j++){
			output[j][i]=input[i][j];
		}
	}
	return output;
}
void print(const int output[][width]){
	for(int i=0;i<length;i++){
		for (int j=0;j<width;j++){
			cout<<output[i][j];
		}
		cout<<endl;
	}
}
int main(int argc, char *argv[]) {
	
	int input[width][length]={{1,2,3,4},{1,2,4,3},{3,4,2,1}};
	int output[length][width];
	output=transpose(input);
	print(output);
	return 0;
}

