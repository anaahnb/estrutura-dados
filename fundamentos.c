/* Primeiro questão */
#include <stdio.h>

int main()
{
  float valor_dolar, valor_real;
  const float taxa_cambio = 5.27; // taxa de câmbio fixa em R$ 5,27 por dólar

  printf("Digite o valor em dólar:");
  scanf("%f", &valor_dolar);

  valor_real = valor_dolar * taxa_cambio;

  printf("%.2f dólares equivalem a R$ %.2f reais.\n", valor_dolar, valor_real);

  return 0;
}

/* Segunda questão */
#include <stdio.h>
int main()
{
  int tempo;
  float valor;

  printf("Informe o tempo em minutos que o carro ficou estacionado: ");
  scanf("%d", &tempo);

  if (tempo <= 15)
  {
    valor = 0.0;
  }
  else if (tempo <= 180)
  {
    valor = 8.0;
  }
  else
  {
    int horas_excedentes = (tempo - 180) / 60;
    valor = 8.0 + 2.0 * horas_excedentes;
  }
  printf("Valor a pagar: R$ %.2f\n", valor);
}

/* Terceira questão */
#include <stdio.h>

int main()
{
  float lado1, lado2, lado3;

  printf("Digite o valor do primeiro lado: ");
  scanf("%f", &lado1);

  printf("Digite o valor do segundo lado: ");
  scanf("%f", &lado2);

  printf("Digite o valor do terceiro lado: ");
  scanf("%f", &lado3);

  if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
  {
    printf("Os valores formam um triângulo.\n");
  }
  else
  {
    printf("Os valores não formam um triângulo.\n");
  }

  return 0;
}

/* Quarta questão */
#include <stdio.h>

int main()
{
  char nome[50];
  int horas_trabalhadas, dependentes;
  float salario_bruto, salario_liquido, desconto_inss, desconto_ir;

  printf("Digite o nome do funcionario: ");
  scanf("%s", nome);

  printf("Digite o numero de horas trabalhadas: ");
  scanf("%d", &horas_trabalhadas);

  printf("Digite o numero de dependentes: ");
  scanf("%d", &dependentes);

  salario_bruto = horas_trabalhadas * 12 + dependentes * 40;
  desconto_inss = salario_bruto * 0.085;

  if (salario_bruto <= 2000)
  {
    desconto_ir = 0;
  }
  else
  {
    desconto_ir = salario_bruto * 0.05;
  }

  salario_liquido = salario_bruto - desconto_inss - desconto_ir;

  printf("Nome: %s\n", nome);
  printf("Salario bruto: R$ %.2f\n", salario_bruto);
  printf("Desconto de INSS: R$ %.2f\n", desconto_inss);
  printf("Desconto de IR: R$ %.2f\n", desconto_ir);
  printf("Salario liquido: R$ %.2f\n", salario_liquido);

  return 0;
}

/* Quinta questão */
#include <stdio.h>

int main()
{
  float distancia_km, preco_gasolina, litros_gasolina, valor_gasto;

  printf("Digite a distancia em km: ");
  scanf("%f", &distancia_km);

  printf("Digite o preco da gasolina em reais: ");
  scanf("%f", &preco_gasolina);

  litros_gasolina = distancia_km / 12;
  valor_gasto = litros_gasolina * preco_gasolina;

  printf("Litros de gasolina consumidos: %.2f\n", litros_gasolina);
  printf("Valor gasto em reais: R$ %.2f\n", valor_gasto);

  return 0;
}

/* Sexta questão */
#include <stdio.h>

int main()
{
  int horas_usadas;
  float valor_total;

  printf("Digite a quantidade de horas utilizadas: ");
  scanf("%d", &horas_usadas);

  if (horas_usadas <= 72)
  {
    valor_total = 30.0;
  }
  else
  {
    valor_total = 30.0 + ((horas_usadas - 72) * 0.05 * 30.0);
  }

  printf("Valor total a ser pago: R$ %.2f\n", valor_total);

  return 0;
}

/* Sétima questão */
#include <stdio.h>

int main()
{
  int x = 0, y = 0, z = 0, n = 0, b = 0, total = 0;
  char voto;

  while (voto != 'F')
  {
    printf("Digite o voto: ");
    scanf("%c", &voto);

    switch (voto)
    {
    case 'X':
      x++;
      total++;
      break;
    case 'Y':
      y++;
      total++;
      break;
    case 'Z':
      z++;
      total++;
      break;
    case 'N':
      n++;
      total++;
      break;
    case 'B':
      b++;
      total++;
      break;
    }
  }

  float percentualX = (x * 100.0) / total;
  float percentualY = (y * 100.0) / total;
  float percentualZ = (z * 100.0) / total;
  float percentualN = (n * 100.0) / total;
  float percentualB = (b * 100.0) / total;

  printf("Resultado da votação:\n");
  printf("Candidato X: %d votos, %.2f%%\n", x, percentualX);
  printf("Candidato Y: %d votos, %.2f%%\n", y, percentualY);
  printf("Candidato Z: %d votos, %.2f%%\n", z, percentualZ);
  printf("Votos nulos: %d, %.2f%%\n", n, percentualN);
  printf("Votos em branco: %d, %.2f%%\n", b, percentualB);

  if (x > y && x > z)
  {
    printf("Candidato X é o vencedor\n");
  }
  else if (y > x && y > z)
  {
    printf("Candidato Y é o vencedor\n");
  }
  else if (z > x && z > y)
  {
    printf("Candidato Z é o vencedor\n");
  }
  else
  {
    printf("Houve um empate\n");
  }
}