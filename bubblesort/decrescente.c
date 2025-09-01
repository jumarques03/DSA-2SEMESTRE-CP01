// Aluno: Júlia Souza Marques
// RM: 565010

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static inline double ms(clock_t a, clock_t b) {
    return 1000.0 * (double)(b - a) / CLOCKS_PER_SEC;
}

void gerar_vetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (i * 37 + 91) % 1000;  // Gera números entre 0 e 999
    }
}

int bubble_sort_decres(int *vetor, int tamanho_vetor){
    int troca;
    int contador = 0;
    do{
        troca = 0;
        for (int i = 0; i < tamanho_vetor - 1; i++) {
            if (vetor[i] < vetor[i + 1]){
                int temp = vetor[i];
                vetor[i] = vetor [i + 1];
                vetor[i+1] =  temp;
                troca = 1;
                contador++;
            }
        }
        
        tamanho_vetor--; // Depois do maior valor ter ido para o final, diminui o tamanho do vetor e segue o loop até acabar
    }while(troca != 0);  
    
    return contador;
}

void medicoes(int *vetor, int n, int v ){
    gerar_vetor(vetor, n);

    clock_t inicio = clock();
    int contador_decrescente = bubble_sort_decres(vetor, n);
    clock_t fim = clock();

    double tempo_execucao= ms(inicio, fim);
    printf("\nContagem de trocas (vetor com %d valores): %d",v, contador_decrescente);
    printf("\nTempo de execução: %f ms\n\n", tempo_execucao);
}

int main(){
    int n01 = 1000;
    int *vetor01 = malloc(n01 * sizeof(int));
    if (vetor01 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    medicoes(vetor01, n01, 1000);

    int n02 = 5000;
    int *vetor02  = malloc(n02  * sizeof(int));
    if (vetor02  == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    medicoes(vetor02, n02, 5000);

    int n03 = 10000;
    int *vetor03  = malloc(n03  * sizeof(int));
    if (vetor03  == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    medicoes(vetor03, n03, 10000);

    free(vetor01);
    free(vetor02);
    free(vetor03);
    
    return 0;
}