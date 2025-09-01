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

int compara_crescente(const void *a, const void *b) {
    int *ponteiro_a = (int *)a;
    int *ponteiro_b = (int *)b;

    int valor_a = *ponteiro_a;
    int valor_b = *ponteiro_b;

    return valor_a - valor_b;
}

void medicoes(int *vetor, int n, int v){
    gerar_vetor(vetor, n);

    clock_t inicio = clock();
    qsort(vetor, n, sizeof(vetor[0]), compara_crescente);
    clock_t fim = clock();

    double tempo_execucao= ms(inicio, fim);
    printf("\nTempo de execução para %d valores: %f ms\n\n",v, tempo_execucao);
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
    int *vetor03 = malloc(n03 * sizeof(int));
    if (vetor03 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    medicoes(vetor03, n03, 10000);

    return 0;
}