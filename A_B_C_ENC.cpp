#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main (){
	
	float a, b, c, res, ress, resss;
	printf("VALOR DE A: ");
	scanf("%f", &a);
	printf("VALOR DE B: ");
	scanf("%f",&b);

	res=a+b;
	printf("\nLA SUMA DE A+B: %f: ",res);
	
	ress=res*res*res;
	printf("\nLA SUMA DE A+B ELEVADO AL CUBO: %f ", ress);
	
	printf("\n\nVALOR DE C: ");
	scanf("%f", &c);
	if(c!=0){
	resss=ress/c;	
	printf("\nEL RESULTADO DE LA OPERACION A+B ELEVADO AL CUBO ENTRE C ES: %f", resss);
	}
	else{
		printf("ERROR DIVISION: ");
	}
	
	
	
	return 0;
	
}
