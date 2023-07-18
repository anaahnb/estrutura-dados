/* Primeiro questão */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 20

typedef struct
{
  int vetor[TAMANHO_PILHA];
  int topo;
} Pilha;

void empilha(int valor, Pilha *P1);
void desempilha(Pilha *P1);
void imprimePilha(Pilha *P1);

int main()
{
  Pilha P1;
  P1.topo = 0;

  empilha(10, &P1);
  empilha(20, &P1);
  empilha(30, &P1);
  empilha(40, &P1);
  desempilha(&P1);
  imprimePilha(&P1);

  Pilha P2;
  P2.topo = 0;

  empilha(55, &P2);
  empilha(66, &P2);
  imprimePilha(&P2);

  return 0;
}

void empilha(int valor, Pilha *P1)
{
  if (P1->topo < TAMANHO_PILHA)
  {
    P1->vetor[P1->topo] = valor;
    P1->topo++;
    printf("O valor %d foi adicionado \n", valor);
  }
  else
  {
    printf("Nao ha mais espaco na pilha \n");
  }
}

void desempilha(Pilha *P1)
{
  if (P1->topo > 0)
  {
    P1->topo--;
    printf("Elemento retirado: %d. \n", P1->vetor[P1->topo]);
  }
  else
  {
    printf("A pilha esta vazia. \n");
  }
}

void imprimePilha(Pilha *P1)
{
  int i;
  printf("\nSegue Impressao da Pilha: \n");
  for (i = (P1->topo) - 1; i >= 0; i--)
  {
    printf("\t %d \n", P1->vetor[i]);
  }
}

/* Segunda questão */
void maior_menor_media(Pilha *p1)
{
  int i;
  int maior = p1->vetor[0];
  int menor = p1->vetor[0];
  int soma = p1->vetor[0];

  for (i = 1; i < p1->topo; i++)
  {
    int elemento = p1->vetor[i];
    if (elemento > maior)
    {
      maior = elemento;
    }
    if (elemento < menor)
    {
      menor = elemento;
    }
    soma += elemento;
  }

  float media = (float)soma / p1->topo;

  printf("Maior elemento: %d\n", maior);
  printf("Menor elemento: %d\n", menor);
  printf("Média aritmetica: %.2f\n", media);
}

int main()
{
  Pilha p1;
  p1.topo = 0;

  empilha(10, &p1);
  empilha(20, &p1);
  empilha(30, &p1);
  empilha(40, &p1);
  empilha(50, &p1);

  maior_menor_media(&p1);

  return 0;
}

/* Terceira questão */
int retorna_remove_topo(Pilha *p1)
{
  if (p1->topo > 0)
  {
    int valor_topo = p1->vetor[p1->topo - 1];
    p1->topo--;
    return valor_topo;
  }
  else
  {
    printf("A pilha esta vazia.\n");
    return -1;
  }
}

int main()
{
  Pilha p1;
  p1.topo = 0;

  empilha(10, &p1);
  empilha(20, &p1);
  empilha(30, &p1);

  int valor_topo = retorna_remove_topo(&p1);
  if (valor_topo != -1)
  {
    printf("Valor do topo removido: %d\n", valor_topo);
  }

  return 0;
}

/* Quarta questão */
void mais_elementos(Pilha *p1, Pilha *p2)
{
  if (p1->topo > p2->topo)
  {
    printf("A pilha P1 tem mais elementos do que a pilha P2.\n");
  }
  else if (p1->topo < p2->topo)
  {
    printf("A pilha P2 tem mais elementos do que a pilha P1.\n");
  }
  else
  {
    printf("As pilhas P1 e P2 tem a mesma quantidade de elementos.\n");
  }
}

int main()
{
  Pilha P1, P2;
  P1.topo = 0;
  P2.topo = 0;

  empilha(10, &P1);
  empilha(20, &P1);
  empilha(30, &P1);

  empilha(40, &P2);
  empilha(50, &P2);

  mais_elementos(&P1, &P2);

  return 0;
}
