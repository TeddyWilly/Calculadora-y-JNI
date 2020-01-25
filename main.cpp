#include <stdio.h>
#include <conio.h>

main()
{
	int val1, val2, opc, resultado;
	
	while(opc !=5)
	{
		printf("*****************Calculadora en C++***************\n");
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Salir\n");
		printf("Selecciona una opcion: ");
		scanf("%d", &opc);
		
		if (opc != 5){
			
			printf("Dame el primer valor: ");
			scanf("%d", &val1);
			printf("Dame el segundo valor: ");
			scanf("%d", &val2);
		}
		switch (opc){
			case 1:
				resultado = val1 + val2;
				printf("El resultado de la suma es %d \n", resultado);
				break;
			case 2:
				resultado = val1 - val2;
				printf("El resultado de la Resta es %d \n", resultado);
				break;
			case 3:
				resultado = val1 * val2;
				printf("El resultado de la Multiplicacion es %d \n", resultado);
				break;
			case 4:
				resultado = val1 / val2;
				printf("El resultado de la Division es %d \n", resultado);
				break;
			case 5:
				break;
		}
	}
	
	
}
