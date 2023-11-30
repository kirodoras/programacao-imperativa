/*
UNIVERSIDADE FEDERAL DE SERGIPE
Programação imperativa
Aluno: Mateus Figueiredo Pereira

Questão 1: Escreva  um  programa  que  calcule  o  discriminante  (delta),  
as  coordenadas  do  vértice  e  as raízes para a equação de segundo grau 
a seguir: 2x² + 9x + 10 = 0. 

Compile: gcc questao1.c -o questao1 -lm
Execute: ./questao1
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 2;
    int b = 9;
    int c = 10;

    float delta = 0;
    float x_i = 0;
    float x_ii = 0;
    float x_v = 0;
    float y_v = 0;

    delta = (float)(b * b) - (4 * a * c);
    x_v = (float)-b / (2 * a);
    y_v = (float)-delta / (4 * a);

    if (delta < 0)
    {
        printf("Não existem raízes reais\n");
    }
    else if (delta == 0)
    {
        x_i = (-b) / (2 * a);
        printf("Raiz: x_i = %.2f\n", x_i);
        printf("Vertice: x_v = %.2f, y_v = %.2f\n", x_v, y_v);
    }
    else
    {
        x_i = (-b + sqrt(delta)) / (2 * a);
        x_ii = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: x_i = %.2f, x_ii = %.2f\n", x_i, x_ii);
        printf("Vertice: x_v = %.2f, y_v = %.3f\n", x_v, y_v);
    }
    return 0;
}