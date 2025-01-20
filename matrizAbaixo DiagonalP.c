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
	
	for(i = TAM-1; i >= 0; i--){
		for(j = TAM-i; j < TAM; j++){
			sum += m[i][j];
			cont++;
		}
	}
	
	if(o == 'S'){
		printf("%.1f\n", sum);
		return 0;
	}
	if(o == 'M'){
		printf("%.1f\n", sum / cont);
		return 0;
	}
	
	return 0;
}