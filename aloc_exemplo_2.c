/** 
Uma empresa vai distrubuir um determinado valor em dinheiro para seus
funcionários. Foi criada uma estrutura de funcionários conforme modelo a seguir,
contendo o código do funcionário e o valor que ele deverá receber.

O programa deverá solicitar na tela:
 (a) O valor a ser dividido entre os funcionários
 (b) O número total de funcionários

O programa deverá alocar dinamicamente um vetor dessa estrutura, para o
número total de funcionários.

Criar funções separadas, que recebem o ponteiro das estruturas alocadas,
para:
i. “Dividir o valor total entre os funcionários”
ii. “Imprimir o resultado”.
*/

#include <stdio.h>
#include <stdlib.h>
struct funcionario{
 int codigo;
 long valorPremio;
};
int main()
{
 struct funcionario * Lista;
 long TotalValorDistribuir = 0;
 int TotalFuncionarios = 0;
 printf("\n Total de valor: ");
 scanf("%d", &TotalValorDistribuir);
 printf("\n Total de funcionarios: ");
 scanf("%d", &TotalFuncionarios);
 Lista = (struct funcionario *) malloc( sizeof(struct funcionario) * TotalFuncionarios );
 Distribuir(TotalValorDistribuir,Lista,TotalFuncionarios);
 Imprimir(TotalFuncionarios, Lista);
 free(Lista);
}
void Distribuir(long TotalValorDistribuir, struct funcionario * Lista, int TotalFuncionarios )
{
 int x, codEmp = 1001;
 long valorDistribuir = 0;
 valorDistribuir = TotalValorDistribuir / TotalFuncionarios;
 for (x = 0; x < TotalFuncionarios; x++)
 {
 Lista[x].codigo = (codEmp + (x * 2));
 Lista[x].valorPremio = valorDistribuir;
 }
}
void Imprimir(int TotalFuncionarios,struct funcionario * Lista)
{
 int x;
 printf("\n\n");
 for (x = 0; x < TotalFuncionarios; x++)
 {
 printf("\n Funcionario %d - Valor: R$ %ld",Lista[x].codigo, Lista[x].valorPremio);
 }
}