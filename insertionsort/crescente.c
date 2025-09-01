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

// Sempre começa da direita para esquerda
int insertion_crescente(int *v, int n) {
    int contador = 0;
    for (int i = 1; i < n; i++) {   // Percorre o vetor a partir do segundo elemento, pq ele considera que o primeiro já está ordenado
        int chave = v[i]; // "A carta que vc retirou do baralho e colocará na ordem correta"
        int j = i - 1;  // Serve para percorrer o vetor ordenado, começa da direita para esquerda
        while (j >= 0 && v[j] > chave){   
            v[j+1] = v[j];  
            j--;    //Só alterna de posição uma vez
        }
        v[j+1] = chave;
        contador+=1; 
    }
    return contador;
}

void medicoes(int *vetor, int n, int v ){
    gerar_vetor(vetor, n);

    clock_t inicio = clock();
    int contador_crescente = insertion_crescente(vetor, n);
    clock_t fim = clock();

    double tempo_execucao= ms(inicio, fim);
    printf("\nContagem de trocas (vetor com %d valores): %d",v, contador_crescente);
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
    int *vetor03 = malloc(n03 * sizeof(int));
    if (vetor03 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    medicoes(vetor03, n03, 10000);

    return 0;
}