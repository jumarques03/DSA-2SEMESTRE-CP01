# 📊 Checkpoint 01 — Medindo Performance de Ordenações em C

## 📌 Descrição
Este trabalho tem como objetivo analisar o desempenho de diferentes algoritmos de ordenação implementados em **C**.  

Foram desenvolvidas versões dos algoritmos **Bubble Sort**, **Insertion Sort** e **qsort**, medindo:  

- ⏱️ Tempo de execução (`clock()` da biblioteca `time.h`)  
- 🔄 Número de comparações/deslocamentos (quando aplicável)  

Os experimentos foram realizados com vetores de **1000, 5000 e 10000 elementos** no intervalo de **0 a 999**, avaliando o comportamento prático de cada algoritmo.

---
## Executável

A pasta com os arquivos executáveis está em: ***DSA-2SEMESTRE-DSA.zip***

---
## 📂 Estrutura do Trabalho
- [`bubblesort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/bubblesort) → Implementação do Bubble Sort  
- [`insertionsort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/insertionsort) → Implementação do Insertion Sort  
- [`qsort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/qsort) → Implementação usando a função `qsort` 
- [`resultados.csv`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/blob/main/resultados.csv) → Resultados obtidos em diferentes cenários de entrada  

**Link para o relatório do projeto:**
-  [`relatório`](https://docs.google.com/document/d/1kgjsK7nocS7PwCzsg9bomOse-K9ZXzCveyrJTUEE_VI/edit?usp=sharing)

---
## 🛠️ Compilação e Execução - Após extrair o arquivo ZIP

### Bubble Sort
```bash
cd bubblesort/output
./crescente
./decrescente

```
### Insertion Sort
```bash
cd insertionsort/output
./crescente
./decrescente

```

### qsort
```bash
cd qsort/output
./crescente
./decrescente

```

## 🛠️ Compilação e Execução - Clonado o Repositório
Para compilar e executar os programas, utilize o compilador **gcc**:  

### Bubble Sort
```bash
cd bubblesort

gcc crescente.c -o crescente
./crescente

gcc decrescente.c -o decrescente
./decrescente

```
### Insertion Sort
```bash
cd insertionsort

gcc crescente.c -o crescente
./crescente

gcc decrescente.c -o decrescente
./decrescente

```

### qsort
```bash
cd qsort

gcc crescente.c -o crescente
./crescente

gcc decrescente.c -o decrescente
./decrescente

```
