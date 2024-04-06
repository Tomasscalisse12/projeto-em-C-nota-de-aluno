#include <stdio.h>

int main(void)
{
    // Declaração das variáveis
    int nota1, nota2, media;

    // Entrada de dados
    printf("Digite a primeira nota do aluno: ");
    scanf("%i", &nota1);

    // Verifica se a nota1 está dentro do intervalo válido
    if (nota1 > 10) {
        printf("Nota inválida! A nota não pode ser maior que 10.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    printf("Digite a segunda nota do aluno: ");
    scanf("%i", &nota2);

    // Verifica se a nota2 está dentro do intervalo válido
    if (nota2 > 10) {
        printf("Nota inválida! A nota não pode ser maior que 10.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Processamento
    media = (nota1 + nota2) / 2;

    // Verifica a situação do aluno
    if (media == 5) {
        printf("Aluno está de exame.\n");
    } else if (media < 5) {
        printf("Aluno está reprovado.\n");
    } else {
        printf("Aluno está aprovado.\n");
    }

    return 0; // Retorna 0 para indicar sucesso
}