#include <stdio.h>

int main(){
	int i, j, L, C;
	
	scanf("%d %d", &L, &C);
	float m[L][C];
	
	for(i = 0;i < L; i++){
		for(j = 0; j < C; j++){
			scanf("%f", &m[L][C]);
		}
	}
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			if((L != C && m[L][C] != 0) || (L == C && m[L][C] != 1)){
				printf("Nao eh matriz identidade\n");
				return 0;
			}
		}
	}
	
	printf("OK");
	
	return 0;
}