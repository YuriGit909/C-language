#include <stdio.h>

int main(){
	int i, j, k, l1, l2, c1, c2;
	
	scanf("%d %d", &l1, &c1);
	scanf("%d %d", &l2, &c2);
	
	float a[l1][c1], b[l2][c2], c[l1][c2];
	
	if(c1 != l2){
		printf("O numero de linhas de A deve ser igual ao de colunas de B\n");
		return 0;
	}
	
	printf("A: \n");
	for(i = 0; i < l1; i++){
		for(j = 0; j < c1; j++){
			scanf("%f", &a[i][j]);
		}
	}

	printf("B: \n");
	for(i = 0; i < l2; i++){
		for(j = 0; j < c2; j++){
			scanf("%f", &b[i][j]);
		}
	}
	
	for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    printf("Result: \n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%.1f ", c[i][j]);
        }
        printf("\n");
    }	
	
	return 0;
}