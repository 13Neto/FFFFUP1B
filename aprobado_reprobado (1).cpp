#include<stdio.h>//libreria de E/S
/*calcular las calificaciones*/
int N1;
int main ()
{ //inicio
printf("ingresa calificacion");
	scanf("%d",&N1);
	if(N1>=7)
	{
		printf("aprobe");
	}
	else
	{
		printf("reprobe");
	}
	
}//fin
