/*
UNIVERSIDADE FEDERAL DE SERGIPE
Programação imperativa
Aluno: Mateus Figueiredo Pereira

Questão 3: A  NASA  vai  iniciar  o  projeto  de  habitação  em  Marte.
Para  isso,  sua  equipe  foi  contratada para  desenvolver  um  programa
que  calcule  o  peso  das  pessoas  no  outro  planeta.  Considere que a
gravidade em Marte seja de 3,72 m/s2.

F = m * g

Compile: gcc questao3.c -o questao3 -lm
Execute: ./questao3
*/
#include <stdio.h>

#define G_DE_MARTE 3.72

int main(void)
{
    int i = 0;
    float massa_dos_tripulantes[] = {70, 72, 74, 76, 78, 80, 82, 84, 86, 88};
    float peso_dos_tripulantes_em_marte[10];

    for (i = 0; i < 10; i++)
    {
        peso_dos_tripulantes_em_marte[i] = massa_dos_tripulantes[i] * G_DE_MARTE;
        printf("Tripulante %d, Massa na Terra: %.2f Kg, Peso em Marte: %.2f N\n", i + 1,
               massa_dos_tripulantes[i], peso_dos_tripulantes_em_marte[i]);
    }
    return 0;
}