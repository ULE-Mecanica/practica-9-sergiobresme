#include <stdio.h>
#include <stdlib.h>
int main ()
{
int n,i;
int *p;
int min;

	printf("dame el nº de elementos\n"),
	scanf("%d", &n);
	p=(int *) malloc(n+sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("dame los valores\n");
	scanf("%d",&*(p+i));
	}
*p;
min=*(p+0);
for(i=0;i<n;i++)
{
if (*(p+i)<min)
min=*(p+i);
}
printf("El menor es:%d\n", min);
free(p);
return 0;
}
