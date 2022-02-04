#include<stdio.h>
#include<stdlib.h>


int main(void){
	char *a = NULL;
	a = (char*)malloc(10*sizeof(char));

	printf("%p",a);
	printf("%p",a+1);
	printf("\n");

	scanf("%s",a);
	printf("%s\n",a);

	return 0;
}