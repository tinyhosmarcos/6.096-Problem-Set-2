#include <iostream>
using namespace std;

int sum(const int a,const int b[]){
	if(a==0){
		return b[a];
	}
	
	else
		return b[a]+sum(a-1,b);
}
int main(){
	int a[]={1,1,1,4};
	cout<<sum(3,a);
	return 0;
}

