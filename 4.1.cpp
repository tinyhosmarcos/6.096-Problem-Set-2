#include <iostream>
using namespace std;


int sum(const int first,const int second){return (first+second);}
double sum(const double first,const double second){return (first+second);}

int main(int argc, char *argv[]) {
	cout<<sum(2.6,3.4343);
	return 0;
}

