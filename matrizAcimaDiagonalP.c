#include <stdio.h>
#define TAM 12

int main(){
	int l, i, j,;
	char t;
	float m[TAM][TAM], sum = 0;
	
	scanf("%d", &l);
	scanf(" %c", &t);
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			scanf("%f", &m[i][j]);
		}
	}
	
	for(i = 0; i < TAM; i++){
		for(j = i+1; j < TAM; j++){
			sum += m[i][j];
		}
	}
	if(t == 'S'){
		printf("%.1f\n", sum);
		return 0;
	}
	if(t == 'M'){
		printf("%.1f\n", sum / (float) TAM);
		return 0;
	}

	return 0;
}