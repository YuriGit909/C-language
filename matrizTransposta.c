#include <stdio.h>
#define TAM 3

int main(){
	int i, j;
	float change, m[TAM][TAM];
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			scanf("%f", &m[i][j]);
		}
	}
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(m[i][j]){
				change = m[j][i];
				printf("%.0f ", change);
			}
		}
		printf("\n");
	}
	
	return 0;
}