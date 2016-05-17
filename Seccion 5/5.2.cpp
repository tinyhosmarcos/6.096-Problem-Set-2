#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
/*ejercicio anterior, debemos saber la cantidad de dardos
que esten dentro del circulo*/
int main () 
{
	int n,cont=0;
	cout<<"Ingrese la cantidad de dardos: ";
	cin>>n;
	float x,y,raiz;
	cout<<"\tx\ty"<<"\tEntro al circulo\n"<<endl;
	for(int i=0;i<n;i++)
	{
		x=(rand()%1001)/1000.0;
		y=(rand()%1001)/1000.0; 
		cout<<"\t"<<x<<"\t"<<y;
		
		raiz=sqrt(x*x+y*y);
		if(raiz<=1)
		{
			cout<<"\t\tSI"<<endl;
			cont++;
		}
		else cout<<"\t\tNO"<<endl;
	}
	
	cout<<"\nEl numero total de dardos que ingresaron al círculo es:  "<<cont<<endl;	
	return 0;
}