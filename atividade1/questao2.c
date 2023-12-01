/*
UNIVERSIDADE FEDERAL DE SERGIPE
Programação imperativa
Aluno: Mateus Figueiredo Pereira

Questão 2: Você  vai  comprar  um  smartphone  que  está  com  15%  de  desconto.
Seu  valor  original  é  de €1.600,00 (Euros) e você vai pagar em 3 parcelas iguais.
Escreva  um programa que calcule o valor final do produto e o valor de cada parcela
em REAIS (sem juros).

Compile: gcc questao2.c -o questao2 -lm
Execute: ./questao2
*/
#include <stdio.h>

int main(void)
{ // Bloco de declaração e atribuição de variáveis
    int desconto = 15, valor_euros = 1600;
    float cotacao = 5.36; // 29/11/23
    // Blocos de cálculo do valor em reais, valor com desconto e parcela
    float valor_reais = (float)valor_euros * cotacao;
    float valor_com_desconto = (float)valor_reais * (100 - desconto) / 100;
    float parcela = valor_com_desconto / 3;
    // Bloco de impressão dos resultados
    printf("Valor em reais: %.2f\nParcela 1: %.2f Parcela 2: %.2f Parcela 3: %.2f\n", valor_com_desconto, parcela, parcela, parcela);

    return 0;
}