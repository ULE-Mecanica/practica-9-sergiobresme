#include <stdio.h>
int main (){
int filas, columnas;
printf("nº filas:");
scanf("%d", &filas);
printf("nº columnas:");
scanf("%d", &columnas);
int M[filas][columnas];

int i ,j;
for (i=0;i<filas;i++){
for(j=0;j<columnas;j++){
printf("numero:[%d][%d]:",i,j );
scanf("%d", &M[i][j]);
}
}
for (i=0;i<filas;i++){
for(j=0;j<columnas;j++){
printf("%d", M[i][j]);
}
printf("\n");
}







return 0;
}
