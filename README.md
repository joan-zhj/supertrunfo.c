# Desafio Super Trunfo - Países 🌍

Este projeto foi desenvolvido para a disciplina de [NOME DA DISCIPLINA] da Estácio.  
O objetivo é representar cartas de países no estilo Super Trunfo, utilizando a linguagem C.

## Objetivo

Criar uma estrutura de dados com três cartas de países, cada uma contendo:

- Continente  
- Código da carta  
- Nome do país  
- População (em milhões)  
- Área (em km²)  
- PIB (em trilhões de dólares)  
- IDH (Índice de Desenvolvimento Humano)

## Estrutura do código

O código define uma estrutura `Carta`, preenche os dados diretamente no programa (sem entrada via teclado), e exibe as três cartas formatadas na tela.

### Países usados:

| Código | País    | Continente     | População (mi) | Área (km²) | PIB (tri USD) | IDH   |
|--------|---------|----------------|----------------|------------|---------------|-------|
| P01    | Brasil  | América do Sul | 213            | 8.515.770  | 2.13          | 0.786 |
| P02    | Noruega | Europa         | 5              | 323.772    | 0.50          | 0.970 |
| P03    | Índia   | Ásia           | 1.438          | 3.287.260  | 4.19          | 0.685 |

## Como executar

Para compilar e rodar o programa (usando GCC):

```bash
gcc main.c -o supertrunfo
./supertrunfo
