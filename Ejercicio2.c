#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[2][3],filas=0,columnas=0,multiplicacion;
	
	for(filas=0;filas<2;filas++){
		for(columnas=0;columnas<3;columnas++){
			printf("Segun la fila N�%d, ingrese la columna N�%d: ",filas+1,columnas+1);
			scanf("%d",&matriz[filas][columnas] );
		}
	}
	
	for(filas=0;filas<2;filas++){
		for(columnas=0;columnas<3;columnas++){
			printf("%d",matriz[filas][columnas]);
		}
		printf("\n ");
	}
	
	printf("\nMatriz multiplicada: \n");
	
	printf("%d ",matriz[0][0]*4);
	printf("%d ",matriz[0][1]*4);
	printf("%d ",matriz[0][2]*4*3);
	printf("\n");
	printf("%d ",matriz[1][0]);
	printf("%d ",matriz[1][1]);
	printf("%d ",matriz[1][2]*3);
	
	system("pause");
	
	return 0;
}
