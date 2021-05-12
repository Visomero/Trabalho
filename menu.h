#include "clientes.h"

int menu_principal(void)
{
  printf("=============== Bem vindo! =================\nDigite um comando para prosseguir:\nC – Gerenciar Clientes\nT – Gerenciar Contas\nS – Sair\n");
}

int menu_clientes(void)
{
  printf("============ Gerenciar Clientes ============\nDigite um comando para prosseguir:\nC – Cadastrar um cliente\nL – Listar todos os clientes cadastrados\nB – Buscar cliente já cadastrado\nA – Atualizar um cliente cadastrado\nE – Excluir um cliente cadastrado\nS – Sair\n");
}

int menu_contas(void)
{
  printf("============ Gerenciar Clientes ============\nR – Listagem de todas as contas cadastradas.\nC – Cadastrar uma conta para um cliente.\nL – Listar todas as contas de um cliente.\nW – Realizar um saque em uma conta.\nD – Realizar um depósito em uma conta.\nT – Realizar transferência entre contas.\nE – Exibir extrato de uma conta.\nS – Sair\n");
}

int opcoes_principal(char opcao)
{
  do
  {
    scanf("%c",&opcao);
    switch(opcao)
    {
      case 'c':
      menu_clientes();
      break;
      case 'C':
      menu_clientes();
      break;
      case 't':
      menu_contas();
      break;
      case 'T':
      menu_contas();
      break;
      case 's':
      exit;
      break;
      case 'S':
      exit;
      break;
      default:
      printf("Opção inválida, tente novamente!\n");
    }
  }while(opcao!='c' && opcao!='C' && opcao!='t' && opcao!='T' && opcao!='s' && opcao!='S');
  
}

int opcoes_clientes(char)
{
  switch(opcao)
  {
    case 'c':
    cadastro_cliente();
    break;
    case 'C':




  }


}