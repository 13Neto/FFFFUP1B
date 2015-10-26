#include <stdio.h>
#include <stdlib.h>
main()
{
	int tb,gb,mb,kb,bytes;
printf("----> Programa Para Llevar de TB a GB,MB,KB,Bytes <---- \n");
printf("\n");
printf("Introduzca La Cantidad de TB: \n");
scanf("%d",&tb);
gb=tb*1024;
mb=gb*1024;
kb=mb*1024/1024;
bytes=kb*1024/1024/1024;

printf("El Resultado en GB es= %d  \n",gb);
printf("El Resultado en MB es= %d  \n",mb);
printf("El Resultado en KB es= %f \n",kb);
printf("El Resultado en Bytes es= %f \n",bytes);

printf("\n");
system ("pause");
return 0;

}



