#include <stdio.h>

int main(){
	int i, j, flag = 0, flag2 = 0, x;
	
	do{
	   	scanf("%d", &x);	
	} while(x <= 0);
	
	float m[x][x];
	
	// Preencher a matriz
	for(i = 0; i< x; i++){
		for(j = 0; j < x; j++){
			scanf("%f", &m[i][j]);
		}
	}
	
	// Verificar se todos os numeros da diagonal sao iguais a 1
	for(i = 0; i < x; i++){
		for(j = 0; j < x; j++){
			if(i==j && m[i][j] == 1){
				flag++;
			}
		}
	}
	
	// Verificar se os numeros fora da diagonal sao iguais a 0 (formato nao preciso)
	for(i = 0; i < x; i++){
		for(j = 0; j < x; j++){
			if(i != j && m[i][j] == 0){
				flag2++;
			}
		}
	}

	int soma = 0, soma2 = 0;
	
	// Se flag2 for diferente de 0, as condicoes acima foram atendidas
	if(flag2 != 0){
		printf("Matriz identidade\n");
	} else {
		// Soma acima da diagonal
		for(i = 0; i < x; i++){
			for(j = i+1; j < x; j++){
				soma += m[i][j];
			}
		}
		// Soma abaixo da diagonal
		for(i = 1; i < x; i++){
			for(j = 0; j < i; j++){
				soma2 += m[i][j];
			}
		}
		// Soma total
		int total = soma + soma2;
		printf("Soma: %d", total);
	}
	return 0;
}
