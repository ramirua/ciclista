#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() 
{
	char ciclista[15][30];
	int i,j,recorrido[2][5], total;
	
	for(i=0; i<2; i++)
	{
		printf("nombre del ciclista: ");
		fflush(stdin);
		gets(ciclista[i]);
		
		for(j=0; j<5; j++)
		{
			printf("ingrese recorrido para el  dia %d:  ", j+1);
			scanf("%d",&recorrido[i][j]);
			
			total=total+ recorrido[i][j];
			
		}
	}
	printf(" el total del recorrido es: %d", total);
	return 0;
}
