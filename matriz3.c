#include <stdio.h>
#define TAM 12

int main(){
	char o;
	int i, j, cont = 0;
	float sum = 0, m[TAM][TAM];
	
	scanf("%c", &o);
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			scanf("%f", &m[i][j]);
		}
	}
	
	for(i = 0; i <= TAM/3; i++){
		for(j = TAM/2-i; j < TAM-1; j++){
			sum += m[i][j];
			cont++;
		}
	}
	
	if(o == 'S'){
		printf("%.1f", sum);
		return 0;
	}
	if(o == 'M'){
		printf("%.1f", sum / cont);
		return 0;
	}
	
	return 0;
}