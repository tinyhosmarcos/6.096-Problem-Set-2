#include<iostream>
#include<stdlib.h>
#include<math.h>
#define dardos 5000000
using namespace std;
/*usando el ejercicio anterior, hacer una funcion para hallar el valor 
m´s proximo a PI, usando 5'000,000 de dardos para más exactitud*/
double hallar_pi(int dardos_totales)
{
	int cont=0;
	double x,y,raiz,result;
	for(int i=0;i<dardos_totales;i++)
	{
		x=(rand()%1001)/1000.0;
		y=(rand()%1001)/1000.0; 
		
		raiz=sqrt(x*x+y*y);
		if(raiz<=1)  {cont++;}
	}
	result=(cont*4.0)/dardos_totales;
	return result;
}

int main () 
{
	cout<<"El valor de pi es: "<<hallar_pi(dardos);
		
	return 0;
}