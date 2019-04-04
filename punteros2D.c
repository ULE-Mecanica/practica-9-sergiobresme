#include <stdio.h>
#include <stdlib>
int main ()
{
int fil,col;
int i,j;
int *mat;
printf("numerode filas:");
scanf("%d", &fil);
printf("numero de columnas:");
scanf("%d", &col);
mat=(int *) malloc(fil*col*sizeof(int));
for(i=0;i<fil;i++)
	{
printf("dame los valores de las fila:");
	}
	for(j=0;j<col;j++)
	{
	printf("dame los valores de las columnas:");
	}
printf("%d", mat);
return 0;
}
	
