#include <stdio.h>

void criarMatrizIdentidade(int matriz[][10], int tamanho) {
    int i, j;
    
	for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void imprimirMatriz(int matriz[][10], int tamanho) {
	int i, j;
    
	for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho da matriz identidade: ");
    scanf("%d", &tamanho);

    int matriz[10][10];
    criarMatrizIdentidade(matriz, tamanho);
    printf("Matriz Identidade de tamanho %d:\n", tamanho);
    imprimirMatriz(matriz, tamanho);

    return 0;
}

/*
Neste c�digo:

A fun��o criarMatrizIdentidade preenche uma matriz quadrada com 1s na diagonal principal e 0s em todas as outras posi��es.
A fun��o imprimirMatriz exibe a matriz no console.
No main, o usu�rio � solicitado a inserir o tamanho da matriz identidade, que � ent�o criada e exibida.

Espero que isso ajude! Se precisar de mais alguma coisa, estou aqui para ajudar.
*/