# 📊 Checkpoint 01 — Medindo Performance de Ordenações em C

## 📌 Descrição
Este projeto tem como objetivo analisar o desempenho de diferentes algoritmos de ordenação implementados em **C**.  

Foram desenvolvidas versões dos algoritmos **Bubble Sort**, **Insertion Sort** e **qsort**, medindo:  

- ⏱️ Tempo de execução (`clock()` da biblioteca `time.h`)  
- 🔄 Número de comparações/deslocamentos (quando aplicável)  

Os experimentos foram realizados com vetores de **1000, 5000 e 10000 elementos** no intervalo de **0 a 999**, avaliando o comportamento prático de cada algoritmo.

---

## 📂 Estrutura do Projeto
- [`bubblesort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/bubblesort) → Implementação do Bubble Sort  
- [`insertionsort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/insertionsort) → Implementação do Insertion Sort  
- [`qsort/`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/tree/main/qsort) → Implementação usando a função `qsort` 
- [`resultados.csv`](https://github.com/jumarques03/DSA-2SEMESTRE-CP01/blob/main/resultados.csv) → Resultados obtidos em diferentes cenários de entrada  

---

## 🛠️ Compilação e Execução
Para compilar e executar os programas, utilize o compilador **gcc**:  

**OBS: Faça o clone do repositório antes!**

### Bubble Sort
```bash
cd bubblesort
gcc bubblesort.c -o bubblesort
./bubblesort
```
### Insertion Sort
```bash
cd insertionsort
gcc insertionsort.c -o insertionsort
./insertionsort
```

### qsort
```bash
cd qsort
gcc qsort.c -o qsort
./qsort
```
