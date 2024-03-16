<include stdio.h>

  int main(){

  int opcao;
  do{
    printf ("Menu\n");
    printf ("1- Criar contato\n");
    printf ("2 - Deletar contato\n");
    printf ("3 - Listar contatos\n");
    printf ("4 - Salvar lista de contatos\n");
    printf ("Escolha uma opção\n");
    scanf("%d", &opcao);    
  }
    while(opcao != 0);
}
