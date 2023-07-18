/*
Primeiro questão
A resposta correta é a alternativa b) I e III, apenas.

Segunda questão
A resposta correta é a opção b) <stdlib.h>.

Terceira Questão
Apenas as afirmativas I e II estão corretas.

Quarta questão
a) O valor que pPont assume é o endereço de memória da variável iVar, ou seja, 3080.
b) O valor que *pPont assume é o valor armazenado no endereço de memória apontado por pPont, ou seja, o valor da variável iVar, que é 15.
c) O valor de jVar será 30 após a atribuição. Isso ocorre porque o valor de iVar é 15 e, portanto, quando multiplicado por 2, resulta em 30.
d) O valor que qPont assume é o endereço de memória obtido somando 2 ao valor de pPont, ou seja, 3082. Isso acontece porque pPont é um ponteiro para iVar, e ao adicionar um valor inteiro a um ponteiro, o resultado é um novo endereço de memória calculado com base no tipo de dado apontado pelo ponteiro (no caso, int tem tamanho 4 bytes, então o deslocamento é de 2 * 4 = 8 bytes).

Quinta questão
0x800 - 7 - 15

Sexta questão
Após essas operações, a pilha terá o estado final com os elementos 15 e 40 no topo, e as duas posições inferiores vazias.

Sétima questão */
void transferirElementos(Pilha *P1, Pilha *P2)
{
  int i;

  if (P1->topo > 0)
  {
    if ((P2->topo + P1->topo) <= TAMANHO_PILHA)
    {
      for (i = 0; i < P1->topo; i++)
      {
        P2->vetor[P2->topo] = P1->vetor[i];
        P2->topo++;
      }

      printf("Elementos transferidos com sucesso!\n");
    }
    else
    {
      printf("Nao ha espaço suficiente na pilha de destino.\n");
    }
  }
  else
  {
    printf("A pilha de origem esta vazia.\n");
  }
}

/* Oitava questão */
void inverter(Pilha *P1)
{
  Pilha P2;
  P2.topo = 0;
  int i;

  for (i = P1->topo - 1; i >= 0; i--)
  {
    empilha(P1->vetor[i], &P2);
  }

  for (i = 0; i < P2.topo; i++)
  {
    P1->vetor[i] = P2.vetor[i];
  }

  P1->topo = P2.topo;

  printf("A pilha foi invertida com sucesso!\n");
}

/* Nona questão */
void iguais(Pilha *P1, Pilha *P2)
{
  int i;

  if (P1->topo != P2->topo)
  {
    printf("As pilhas sao diferentes.\n");
    return;
  }

  for (i = 0; i < P1->topo; i++)
  {
    if (P1->vetor[i] != P2->vetor[i])
    {
      printf("As pilhas sao diferentes.\n");
      return;
    }
  }

  printf("As pilhas sao iguais.\n");
}

/* Décima questão */
void cheia(Pilha *P1)
{
  if (P1->topo == TAMANHO_PILHA)
  {
    printf("A pilha esta cheia.\n");
  }
  else
  {
    printf("A pilha nao esta cheia.\n");
  }
}
