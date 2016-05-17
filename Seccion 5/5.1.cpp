
#include<iostream>
#include<stdlib.h>
using namespace std;

int main () 
{
	int n;
	cout<<"Ingrese la cantidad de coordenadas: ";
	cin>>n;
	float x,y;
	cout<<"\tx\t\ty\n"<<endl;
	for(int i=0;i<n;i++)
	{
		x=(rand()%1001)/1000.0;
		y=(rand()%1001)/1000.0; 
		//x = (double) rand() / RAND_MAX;
		//y = (double) rand() / RAND_MAX;
		cout<<"\t"<<x<<"\t\t"<<y<<endl;
	}
	
	return 0;
}
