//1. Realizar un programa que determine el monto a pagar de un alumno en base a su nota. If anidados.

#include<stdio.h>
#include<conio.h>

using namespace std;
int main(){
	float monto_colegiatura = 700, descuento = 0, nota = 0, colegiatura_final = 0;
	
	printf("***********DESCUENTOS DE ALUMNOS:***********\n");
	printf("La colegiatura es de Q700.00");printf("\n"); 
	printf("\n");
	printf("Notas de 95 a 100, su descuento sera el 30 por ciento.\n");
	printf("Notas de 90 a 94, su descuento sera el 28 por ciento. \n");
	printf("Notas de 80 a 89, su descuento sera el 22 por ciento. \n");
	printf("Notas de 70 a 79, su descuento sera el 18 por ciento. \n");
	printf("Notas de 60 a 69, su descuento sera el 10 por ciento. \n");
	printf("Notas menores a 60, NO TENDRAN DESCUENTO\n");
	printf("\n");
	printf("INGRESE NOTA FINAL DEL ALUMNO: "); scanf("%f",&nota);  printf("\n");
	
	if((nota >= 95)&&(nota <=100))
	{
		descuento = monto_colegiatura*0.3;
		colegiatura_final = monto_colegiatura-descuento;
		printf("FELICIDADES POR SU NOTA!!!\n");
	}
	else if((nota >=90)&&(nota<=94))
	{
		descuento = monto_colegiatura*0.28;
		colegiatura_final = monto_colegiatura-descuento;
	}
	else if((nota >=80)&&(nota<=89))
	{
		descuento = monto_colegiatura*0.22;
		colegiatura_final = monto_colegiatura-descuento;
	}
	else if((nota >=70)&&(nota<=79))
	{
		descuento = monto_colegiatura*0.18;
		colegiatura_final = monto_colegiatura-descuento;
	}
	else if((nota >=60)&&(nota<=69))
	{
		descuento = monto_colegiatura*0.10;
		colegiatura_final = monto_colegiatura-descuento;
	}
	else
	{
		descuento = 0;
		colegiatura_final = monto_colegiatura;
		printf("NO TIENE NINGUN DESCUENTO\n");
	}	
	printf("Su descuento es de: Q%.2f",descuento); 	printf("\n");
	printf("LA COLEGIATURA A PAGAR ES DE: Q%.2f",colegiatura_final); 	printf("\n");
	
	getch();
	return 0;
}
