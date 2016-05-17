#include <iostream>
using namespace std;


int sum(const int first,const int second){return (first+second);}

int main(int argc, char *argv[]) {
	cout<<sum(2,3.4343); //La conversion del double a int es implicito
	return 0;
}

