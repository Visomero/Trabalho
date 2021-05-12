#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "clientes.h"

struct cadastro_cliente
{
  int codigo;
  char nome[128];
  long int documento;
  char telefone[64];
  char endereco[128];
}

struct cadastro_cliente clientes[100]

int main(void)
{
  char opcao;
  menu_principal();
  opcoes_principal(opcao);
  if(opcao=='c' || opcao=='C')
  {
    

  }
  
  
return 0;
}
