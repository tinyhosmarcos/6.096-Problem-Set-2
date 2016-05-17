#include <iostream>
using namespace std;


int sum(const int a,const int b){return (a+b);}
int sum(const int a,const int b,const int c){return (a+b+c);}
int sum(const int a,const int b,const int c,const int d){return (a+b+c+d);}
int main(int argc, char *argv[]) {
	cout<<sum(2,3,4,5); //sobrecarga de operador
	return 0;
}
