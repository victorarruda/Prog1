#include <stdio.h>
#include <stdio_ext.h>
#define TAM 3

struct Produtos{
    int codigo;
    int quantidade;
    char nome[15];
    float preco;
};

int main() {
 //   struct Produto;
    int opcao,indice=0;
    struct Produtos produto[TAM];
    printf("1 - Cadastrar produto. \n");
    printf("2 - Listar produtos. \n");
    printf("3 - Efetuar pedido. \n");
    printf("4 - Listar pedidos. \n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            for(int i=indice;i<TAM;i++){
                //if(indice<TAM){
                    produto[i].codigo=i+1;
                    printf("Código produto: %d - Informe o nome do produto:\n",produto[i].codigo);
                    __fpurge(stdin);
                    fgets(produto[i].nome,sizeof(produto[i].nome),stdin);
                    printf("Informe a quantidade do produto:\n");
                    __fpurge(stdin);
                    scanf("%d",&produto[i].quantidade);
                    printf("Informe o preço do produto:\n");
                    __fpurge(stdin);
                    scanf("%.2f",&produto[i].preco);
                    indice++;
                //}
            }
        break;
        case 2:
            for(int i=0;i<indice;i++){
                printf("Código produto: %d \n Nome do produto: %s \n Quantidade: %d \n Preço: %.2f\n",produto[i].codigo,produto[i].nome,produto[i].quantidade,produto[i].preco);
            }
            getchar();
        break;
        case 3:
            printf("a");
        break;
        case 4:
            printf("a");
        break;
        default:
            printf("Informe uma opção valida.\n");
    }


    return 0;
}