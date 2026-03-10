#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -----------------------------
// 1️⃣ Definir a estrutura
// -----------------------------
typedef struct s_pessoa
{
    char nome[50];
    int idade;
    float altura;
    struct s_pessoa *next; // ponteiro para a próxima pessoa (lista ligada)
} t_pessoa;

// -----------------------------
// 2️⃣ Criar uma nova pessoa
// -----------------------------
t_pessoa *criar_pessoa(const char *nome, int idade, float altura)
{
    // Alocar memória para uma nova pessoa
    t_pessoa *nova = malloc(sizeof(t_pessoa));
    if (!nova)
        return NULL;

    // Preencher os campos
    strcpy(nova->nome, nome);
    nova->idade = idade;
    nova->altura = altura;
    nova->next = NULL; // por padrão, ainda não aponta para ninguém

    return nova;
}

// -----------------------------
// 3️⃣ Imprimir uma pessoa
// -----------------------------
void mostrar_pessoa(t_pessoa *p)
{
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p->nome, p->idade, p->altura);
}

// -----------------------------
// 4️⃣ Imprimir a lista completa
// -----------------------------
void mostrar_lista(t_pessoa *inicio)
{
    t_pessoa *atual = inicio;
    while (atual != NULL)
    {
        mostrar_pessoa(atual);
        atual = atual->next; // avança para a próxima pessoa
    }
}

// -----------------------------
// 5️⃣ Libertar memória da lista
// -----------------------------
void libertar_lista(t_pessoa *inicio)
{
    t_pessoa *tmp;
    while (inicio)
    {
        tmp = inicio->next;
        free(inicio);
        inicio = tmp;
    }
}

// -----------------------------
// 6️⃣ Função principal (main)
// -----------------------------
int main(void)
{
    // Criar 3 pessoas
    t_pessoa *p1 = criar_pessoa("Joao", 20, 1.80);
    t_pessoa *p2 = criar_pessoa("Maria", 22, 1.65);
    t_pessoa *p3 = criar_pessoa("Rita", 19, 1.70);

    // Ligar as structs (criar uma lista encadeada)
    p1->next = p2;
    p2->next = p3;

    // Mostrar todas as pessoas da lista
    printf("📋 Lista de pessoas:\n");
    mostrar_lista(p1);

    // Libertar memória
    libertar_lista(p1);

    return 0;
}
