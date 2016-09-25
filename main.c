#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cantidad1,cantidad2,cantidad3,cantidadtotal,porcentaje1,porcentaje2,porcentaje3;
	int continuar;
	system("cls");
	fflush(stdin);
	system("color F0");
	do{
		printf("\t\t\t\t\tCalculadora de Inversiones\t\t\t\t\t");
		printf("\n\n\t\tCantidad invertida persona %c1: ",35);
		scanf("%f",&cantidad1);
		printf("\n\t\tCantidad invertida persona %c2: ",35);
		scanf("%f",&cantidad2);
		printf("\n\t\tCantidad invertida persona %c3: ",35);
		scanf("%f",&cantidad3);
		cantidadtotal=cantidad1+cantidad2+cantidad3;
		porcentaje1=(cantidad1*100)/cantidadtotal;
		porcentaje2=(cantidad2*100)/cantidadtotal;
		porcentaje3=(cantidad3*100)/cantidadtotal;
		printf("\n\t\tEl porcentaje que la persona %c1 invierte con respecto a la cantidad total invertida es: %.2f",35,porcentaje1);
		printf("\n\t\tEl porcentaje que la persona %c2 invierte con respecto a la cantidad total invertida es: %.2f",35,porcentaje2);
		printf("\n\t\tEl porcentaje que la persona %c3 invierte con respecto a la cantidad total invertida es: %.2f",35,porcentaje3);	
		printf("\n\t\tPresiona (1) para volver a iniciar: ");
		scanf("%d",&continuar);
		system("cls");
	}while(continuar==1);
	printf("\t\t\t\t\tCalculadora de Inversiones\t\t\t\t\t");
	printf("\n\n\n\t\t\t\t\t\t--Adieu--\t\t\t");
	
	return 0;
}
